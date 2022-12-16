#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char lname[20];
    char fname[20];
    int age;
}STUDENT;

int main(){
    void *p2v;
    STUDENT *s1;
    int i;
    s1 = (STUDENT *)malloc(sizeof(STUDENT));
    p2v = s1;
    printf("Enter last name: ");
    fgets(s1->lname, 19, stdin); // '\n'
    // fgets((*s1).lname, 19, stdin);
    i = 0;
    //Kada dobijemo očitan znak '\n' mijenjamo ga za '\0'.
    while(s1->lname[i] != '\n'){
        i++;
    }
    s1->lname[i] = '\0';
    printf("Last name: %s\n", s1->lname);
    printf("Last name: %s\n", ((STUDENT *)p2v)->lname);
    free(s1);
    return 0;
}
