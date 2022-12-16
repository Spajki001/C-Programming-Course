#include <stdio.h>
#include <string.h>

typedef struct personal_info{
    char fname[20];
    char lname[20];
    char OIB[12];
    int salary;
    char bdate[12];
    char max_fname[20];
    char max_lname[20];
    char max_OIB[12];
    int max_salary;
    char max_bdate[12];
}PERSONAL_INFO;

int main(){
    PERSONAL_INFO info;
    int n, fname_length, lname_legth, bdate_length;
    info.max_salary = 0;
    do{
        printf("Input the amount of programmers: ");
        scanf("%d", &n);
        printf("\n");
    }while(n<0||n>15);
    for(int i=1;i<=n;i++){
        printf("Input first name: ");
        scanf("%s", info.fname);
        printf("Input last name: ");
        scanf("%s", info.lname);
        printf("Input OIB: ");
        scanf("%s", info.OIB);
        printf("Input salary: ");
        scanf("%d", &info.salary);
        printf("Input birthday date: ");
        scanf("%s", info.bdate);
        printf("---------------------------------\n");
        if(info.salary>info.max_salary){
            for(int j=0;info.fname[j]!='\0';j++){
                info.max_fname[j]=info.fname[j];
            }
            for(int j=0;info.lname[j]!='\0';j++){
                info.max_lname[j]=info.lname[j];
            }
            for(int j=0;info.OIB[j]!='\0';j++){
                info.max_OIB[j]=info.OIB[j];
            }
            info.max_salary=info.salary;
            for(int j=0;info.bdate[j]!='\0';j++){
                info.max_bdate[j]=info.bdate[j];
            }
        }
    }
    printf("\nFirst name: ");
    for(int i=0;info.fname[i]!='\0';i++){
        printf("%c", info.max_fname[i]);
    }
    printf("\nLast name: ");
    for(int i=0;info.lname[i]!='\0';i++){
        printf("%c", info.max_lname[i]);
    }
    printf("\nOIB: ");
    for(int i=0;info.OIB[i]!='\0';i++){
        printf("%c", info.max_OIB[i]);
    }
    printf("\nSalary: %d", info.max_salary);
    printf("\nBirthday date: ");
    for(int i=0;info.bdate[i]!='\0';i++){
        printf("%c", info.max_bdate[i]);
    }
    return 0;
}