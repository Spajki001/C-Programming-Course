#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void populaterArray2d(int *a, int r, int c){
    srand((unsigned)time(NULL));
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            a[i*c+j]=899*(1.0*rand())/(1.0*RAND_MAX)+100;
        }
    }
}

void printArray2d(int *a, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%3d ", a[i*c+j]);
        }
        printf("\n");
    }
}

int main(){
    int array2d[10][10];
    populaterArray2d(&array2d[0][0], 10, 10);
    printArray2d(&array2d[0][0], 10, 10);
    return 0;
}