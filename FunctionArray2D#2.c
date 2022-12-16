#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int **allocArray2d(int r, int c){
    int **a;
    a=(int **)malloc(r*sizeof(int *));
    for(int i=0; i<r; i++){
        a[i]=(int *)malloc(c*sizeof(int));
    }
    return a;
}

void populateArray2d(int **a, int r, int c){
    srand((unsigned)time(NULL));
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            a[i][j]=899*(1.0*rand())/(1.0*RAND_MAX)+100;
        }
    }
}

void printArray2d(int **a, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int **array2d;
    array2d=allocArray2d(10,10);
    populateArray2d(array2d, 10, 10);
    printArray2d(array2d, 10, 10);
    free(array2d);
    return 0;
}