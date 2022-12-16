#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

int main(){
    int m, n = 0;
    int* p = NULL;
    int* k = NULL;
    srand((unsigned)time(NULL));
    m = (int)(3 + 1.0 * rand() / RAND_MAX * 15);
    p = allocMatrix(p, m);
    populateMatrix(p, m);

    n = biggestEvenNum(p, m);
       printf("%d\n", n);
    
    k = newMatrix(p, m, n);
    printMatrix(k, m);
    return 0;
}