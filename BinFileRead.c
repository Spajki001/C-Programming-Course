#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE_DIR "./TextAndBinaryFiles/"

typedef struct employee{
    char fname[30], lname[30];
    float sallary;
    int age;
    char email[50];
}EMPLOYEE;

int main(){
    FILE *pfr;
    char fileName[30];
    int i;
    EMPLOYEE *e;
    e = (EMPLOYEE *)malloc(sizeof(EMPLOYEE));
    printf("File name: ");
    fgets(fileName, 30, stdin);
    i = 0;
    while(fileName[i] != '\n' && i < 29) i++;
    fileName[i] = '\0';
    char* finalName = malloc (strlen(BASE_DIR) + strlen(fileName) + 1);
    sprintf (finalName, "%s%s", BASE_DIR, fileName);
    pfr = fopen(finalName, "rb");
    fread(e, sizeof(EMPLOYEE), 1, pfr);
    printf("%s %d %.2f\n",e->fname, e->age, e->sallary);
    free(e);
    free(finalName);
    return 0;
}