#include <stdio.h>

int main(){
    int choice;
    do{
        printf("Make your choice:\n");
        printf("1. Print date\n");
        printf("2. Print text\n");
        printf("3. End program\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("The day before women's day.\n");
                break;
            case 2:
                printf("Some random text - don't forget tomorrow's date.\n");
                break;
            case 3:
                return 0;
                break;
            default:
                printf("Wrong choice.\n");
                break;
        }
    }while(choice!=3);
    return 0;
}