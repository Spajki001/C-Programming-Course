#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int **array2d;
    int i, j, rows, cols;
    do{
        printf("Enter number of rows and cols: ");
        scanf("%d%d", &rows, &cols);
    }while (rows < 2 || cols < 2);
    array2d = (int **)malloc(sizeof(int *) * rows);
    //array2d = (int **)calloc(rows, sizeof(int *));
    for(i = 0; i < rows; i++){
        array2d[i] = (int *)malloc(cols * sizeof(int));
        printf("Address [%2d]: %x", i + 1, array2d[i]);
        for(j = 0; j < cols; j++){
            array2d[i][j] = (999 - 100) * (1.0 * rand()) / (1.0 * RAND_MAX) + 100;
            //printf("%3d ", *(*(array2d + i) + j));
        }
        printf("\n");
    }
    for(i = 0; i < rows; i++){
        free(array2d[i]);
    }
    free(array2d);
    return 0;
}