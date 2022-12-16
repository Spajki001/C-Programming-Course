#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int writeFile(int n, char *fileName){
    FILE *file = fopen(fileName,"w");
    if (file == NULL){
        printf("Failed to open file!");
        return 0;
    }
    fprintf(file, "%d\n", n);
    fclose(file);
}

int number(int n){
    if (n != 0){
        return (n % 10 + number(n / 10));
    }
    else{
        return 0;
    }
}

int main(){
    int a, result;
    printf("Input the number: ");
    scanf("%d", &a);
    result = number(a);
    printf("Sum is -> %d",result);

    writeFile(result, "./TextAndBinaryFiles/sum.txt");
 
}