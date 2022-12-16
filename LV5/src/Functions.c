#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

int *allocMatrix(int* p, int m){
    p = (int*)calloc((m * m),sizeof(int));
    return p;
}

void populateMatrix(int* p, int m){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
        *(p + i + j) = (int)(-1550 + 1.0 * rand() / RAND_MAX *1800);
        }
    }
}

int biggestEvenNum(int* p, int m){
    int max = -28390831;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(j >= (m - i) && *(p + i + j) % 2 == 0 && *(p + i + j) > max){
                max = *(p + i + j);
                }
            }
        }
         
    return max;
}
int *newMatrix(int *p, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(j < (m - 1) - i){
                *(p + i + j) = n;
            } 
        }
    }
    return p;
}
void printMatrix(int* p, int m){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%2d ",*(p + i + j));
        }
        printf("\n");
    }
}
void eraseMatrix(int* p){
    free(p);
}