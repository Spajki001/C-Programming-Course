#include <stdio.h>

int main(){
    char myString[100];
    int i, len;
    printf("Enter string: ");
    fgets(myString, 99, stdin);
    i = 0;
    len = 0;
    while(myString[i] != '\n'){
        i++;
        if(myString[i] != ' ') len++;
    }
    myString[i] = '\0';
    printf("String length: %d\n", len);
    return 0;
}
