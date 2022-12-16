#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN -50
#define MAX 100

int rand_num(){
    return (int)((rand() / (float)RAND_MAX) * (MAX - MIN)) + MIN;
}

int find_max(FILE *file, int *mat, int length, int current, int max){
    if (current < length - 1){
        int number = *(mat + current);
        fprintf(file, "%d\n", number);
        if (number > max)
        {
            max = number;
        }
        current++;
        return find_max(file, mat, length, current, max);
    }
    else{
        return max;
    }
}

int main(void){
    srand((unsigned)time(NULL));
    int number;
    do{
        printf("Input the number [0,20]: ");
        scanf("%d", &number);
    }while (number < 0 || number > 20);

    int *mat = calloc(number, sizeof(int));
    int *ptr = mat;
    for (int i = 0; i < number; i++){
        *ptr = rand_num();
        ptr++;
    }

    FILE *file = fopen("./TextAndBinaryFiles/BiggestRand.txt", "w");
    if (file == NULL){
        return 1;
    }

    int max = find_max(file, mat, number, 0, 0);
    printf("Max -> %d\n", max);
    fprintf(file, "Max -> %d\n", max);

    free(mat);
    fclose(file);
    return 0;
}