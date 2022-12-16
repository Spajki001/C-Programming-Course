#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populate(int *a, int N, int lo, int hi){
    srand((unsigned)time(NULL));
    for(int i = 0; i < N; i++){
        a[i] = (hi - lo) * (1.0 * rand()) / (1 * RAND_MAX) + lo;
    }
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortBubble(int *a, int N, int *s){
    int swapped;
    for(int i = 0, swapped = 1; swapped; i++){
        swapped = 0;
        for(int j = 0; j < N - 1 - i; j++){
            (*s)++;
            if(a[j + 1] < a[j]){
                swap(a + j + 1, a + j);
                swapped = 1;
            }
        }
    }
}

void sortBubble2(int *a, int N, int *s){
    for(int i = 0; i < N - 1; i++){
        //swapped = 0;
        for(int j = i + 1; j < N; j++){
            (*s)++;
            if(a[j] < a[i]){
                swap(a + j, a + i);
                //swapped = 1;
            }
        }
    }
}

void printArray(int *a, int N){
    for(int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int searchBinary(int *a, int N, int search, int *steps){
    int s, lo = 0, hi = N - 1;
    do{
        (*steps)++;
        s = (lo + hi) / 2;
        if(a[s] == search)
            return 1;
        if(search < a[s])
            hi = s - 1;
        if(search > a[s])
            lo = s + 1;
    }while(lo <= hi);
    return 0;
}

int main(){
    int *array, N = 100, low = 100, high = 999;
    int steps = 0, searchSteps = 0, search;
    srand((unsigned)time(NULL));
    array = (int *)malloc(N * sizeof(int));
    populate(array, N, low, high);
    printArray(array, N);
    printf("\n");
    //mijenjaj sortBubble2 i sortBubble ovisno o potrebi.
    sortBubble2(array, N, &steps);
    printArray(array, N);
    printf("\nNumber of sorting steps: %d\n", steps);
    search = array[99];
    printf("%d ", search);
    if(searchBinary(array, N, search, &searchSteps))
        printf("Found ");
    else
        printf("Not found ");
    printf("in %d steps.\n", searchSteps);
    free(array);
    return 0;
}