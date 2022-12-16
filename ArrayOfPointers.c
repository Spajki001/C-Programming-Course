#include <stdio.h>

int main(){
    int *arrayOfPointers[3];
    int a = 1, b = 3, c = 5;
    arrayOfPointers[0] = &a;
    arrayOfPointers[1] = &b;
    arrayOfPointers[2] = &c;
    printf("Neshto: %d\n", *arrayOfPointers[2]);
    return 0;
}