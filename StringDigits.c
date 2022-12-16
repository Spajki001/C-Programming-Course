#include <stdio.h>

int main(){
    char digits[11] = "xxxxxxxxx";
    int i, value;
    printf("Enter value: ");
    scanf("%d", &value);
    i = 0;
    digits[10] = '\0';
    printf("String: %s\n", digits);
    while(value > 0){
        digits[10 - i - 1] = (value % 10) + 48;
        printf("%c ", digits[10 - i - 1]);
        value /= 10;
        i++;
    }
    printf("\nNumber: %s\n", digits);
    return 0;
}