#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5;
    int *ptr = NULL;
    int **ptr2ptr = NULL;
    ptr = &a;
    ptr2ptr = &ptr;
    printf("a via ptr: %d\n", *ptr);
    printf("a via ptr2ptr: %d\n", **ptr2ptr);
    return 0;
}