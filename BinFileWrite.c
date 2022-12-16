#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE_DIR "./TextAndBinaryFiles/"

typedef struct employee{
    char fname[30], lname[30];
    float salary;
    int age;
    char email[50];
}EMPLOYEE;

void setEmployeeData(EMPLOYEE *e){
    int i;
    printf("Employee's first name: ");
    fgets(e->fname, 30, stdin);
    i = 0;
    while(e->fname[i] != '\n' && i < 29) i++;
    e->fname[i] = '\0';
    e->salary = 1024;
    e->age = 68;
}

int main(){
    FILE *pfw;
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
    pfw = fopen(finalName, "wb");
    setEmployeeData(e);
    fwrite(e, sizeof(EMPLOYEE), 1, pfw);
    fclose(pfw);
    free(e);
    free(finalName);
    return 0;
}