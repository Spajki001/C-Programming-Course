#include <stdio.h>

int main(){
    int array2d[][6] = {
        {1, 2, 3, 4, 5, 6},
        {2, 3, 4, 5, 6, 7},
        {3, 4, 5, 6, 7, 8},
        {4, 5, 6, 7, 8, 9},
        {5, 6, 7, 8, 9, 0}
    };
    int i, j;
    int *ptr = &array2d[0][0];
    //Ispis sa 1 petljom.
    for(i = 0; i < 30; i++){
        printf("%2d ", *(ptr + i));
        if((i + 1) % 6 == 0){
            printf("\n");
        }
    }
    //Ispis sa 2 petlje.
    for(i = 0; i < 5; i++){
        for(j = 0; j < 6; j++){
            printf("%2d ", *(ptr + i * 6 + j));
        }
        printf("\n");
    }
    return 0;
}