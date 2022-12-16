#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fp1 = fopen("./TextAndBinaryFiles/Prva.txt", "r");
    FILE *fp2 = fopen("./TextAndBinaryFiles/Druga.txt", "w");
    if (NULL == fp1 || NULL == fp2) {
        return 1;
    }
    char c;
    while((c = fgetc(fp1)) != EOF) {
        putc(toupper(c), fp2);
    }
    return 0;
}