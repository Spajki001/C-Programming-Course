#include <stdio.h>
#include <string.h>

#define MAX_LEN 250

void print_reverse(FILE *file, char *str, int curr)
{
    if (curr >= 0)
    {
        char c = *(str + curr);
        printf("%c", c);
        fprintf(file, "%c", c);
        curr--;
        print_reverse(file, str, curr);
    }
}

int main(void)
{
    printf("Input string: ");

    char str[MAX_LEN];
    fgets(str, MAX_LEN, stdin);

    FILE *file = fopen("./TextAndBinaryFiles/ReverseString.txt", "w");
    if (file == NULL)
    {
        return 1;
    }

    print_reverse(file, str, strlen(str) - 1);
    printf("\n");

    fclose(file);
    return 0;
}