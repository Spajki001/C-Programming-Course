#include <stdio.h>
#include <stdlib.h>

float seq(int needle[], int hay[], int n_needle, int n_hay) {
    int i, j, found = 0;
    float steps = 0, strike = 0;
    printf("Sequential:\n");
    for (i = 0; i < n_needle; i++) {
        found = 0;
        for (j  = 0; j < n_hay; j++) {
            if (hay[j] == needle[i]) {
                printf("%d. number %d is found in %d steps.\n",i+1,needle[i],j+1);
                found = 1;
                steps += j+1;
                strike++;
                break;
            }
        }
        if (!found) {
            printf("%d. number %d is not found.\n",i+1, needle[i]);
        }
    }
    steps /= strike;
    if (strike == 0) return 0;
    return steps;
}
void swap (int *x, int *y) {
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void quickSort(int a[], int low, int high) {
    int i = low, j = high;
    int s = a[(low + high) / 2];
    while (i <= j) {
        while (a[i] < s) {
            i++;
        }
        while (a[j] > s) {
            j--;
        }
        if (i <= j) {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
    } 
    if (low < j)
        quickSort(a, low, j);
    if (i < high)
        quickSort(a, i, high);
}

float bin(int needle[], int hay[], int n_needle, int n_hay) {
    float steps = 0;
    float strike = 0;
    quickSort(hay, 0, n_hay - 1);
    int i, brk = 0;
    printf("Binary:\n");
    for (i = 0; i < n_needle; i++) {
        brk = 1;
        int dg = 0;
        int gg = n_hay-1;
        while (dg<=gg) {
            int s = (dg+gg)/2;
            if (needle[i] == hay[s]) {
                printf ("%d. number %d is found in %d steps.\n",i+1, needle[i], brk);
                steps += brk;
                strike++;
                break;
            }
            else if (needle[i]>hay[s]) {
                dg = s+1;
                brk++;
            }
            else if (needle[i]<hay[s]) {
                gg = s-1;
                brk++;
            }
        }
        if (dg>gg) printf ("%d. number %d is not found.\n", i+1,needle[i]);
    }
    if (strike == 0) return 0;
    steps /= strike;
    return steps;
}


int main(void) {
    int input[5] = {};
    int i = 0;
    for (i = 0; i < 5; i++) {
        if(i == 0){
            printf("\nInput %dst number within [0,1000]: ", i+1);
        }
        else if(i == 1){
            printf("Input %dnd number within [0,1000]: ", i+1);
        }
        else if(i == 2){
            printf("Input %drd number within [0,1000]: ", i+1);
        }
        else if(i == 3 || i == 4){
            printf("Input %dth number within [0,1000]: ", i+1);
        }
        scanf("%d",&input[i]);
    }
    int A[500] = {};
    FILE *fp = fopen("./TextAndBinaryFiles/FindRandNum.txt","r");
    for (i = 0; i < 500; i++) {
        fscanf(fp,"%d",&A[i]);
    }
    fclose(fp);
    printf("\nResults:\n");
    float kor_seq = seq(input, A, 5, 500);
    printf("\n");
    float kor_bin = bin(input, A, 5, 500);
    printf("\nArithmetic number of steps for sequential search is: %.2f\n",kor_seq);
    printf("Arithmetic number of steps for binary search is: %.2f.\n\n",kor_bin);
    return 0;
}