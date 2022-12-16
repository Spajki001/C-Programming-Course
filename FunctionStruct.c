#include <stdio.h>
#include <stdlib.h>

typedef struct employee{
    char fname[30], lname[30];
    float sallary;
    int age;
    char email[50];
}EMPLOYEE;

void setEmployee(EMPLOYEE *e){
    int i;
    printf("Enter employee's first name: ");
    fgets(e->fname, 29, stdin);
    i = 0;
    while(e->fname[i] != '\n' && i < 29) i++;
    e->fname[i] = '\0';
}

int main(){
    EMPLOYEE *em;
    em = (EMPLOYEE *)malloc(sizeof(EMPLOYEE));
    printf("(B4) Employee's first name: %s\n", em->fname);
    setEmployee(em);
    printf("(After) Employee's first name: %s\n", em->fname);
    free(em);
    return 0;
}