#include <stdio.h>
#include <stdlib.h>

int main(){
    int ascii = 65;
    int n = 10;
    int repeat = 0;
    printf("\n");
    for (int i = 0; i < n; i++){
        repeat = n - i - 1;
        for (int j = 0; j < repeat; j++){
            printf(" ");
        }
        for (int k = 0; k < i+1; k++){
            printf("%c ", ascii);
            ascii += 1;
        }
        printf("\n");
    }
    printf("\n");
    return 1;
}