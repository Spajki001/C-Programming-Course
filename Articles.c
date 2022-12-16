#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct article{
    char name[50];
    char price[8];
    char amount[4];
    char max_name[50];
    char max_price[8];
    char max_amount[4];
}ARTICLE;

int main(){
    ARTICLE *ptr;
    ptr=(ARTICLE*)calloc(6, sizeof(ARTICLE));
    int n, i, max_i;
    do{
        printf("Amount of articles: ");
        scanf("%d", &n);
        printf("\n");
    }while(n<1||n>50);
    for(i=1;i<=n;i++){
        printf("Name of the article: ");
        scanf("%s", (ptr+i)->name);
        printf("Price of the article: ");
        scanf("%s", (ptr+i)->price);
        printf("Amount of the article: ");
        scanf("%s", (ptr+i)->amount);
        printf("\n");
        for(int j=0;ptr->price[j-1]!='\0';j++){
            if((ptr->price[j])>(ptr->max_price[j])){
                ptr->max_price[j]=ptr->price[j];
                max_i=i;
            }
            else if((ptr->price[j])==(ptr->max_price[j])){
                ptr->max_price[j]=ptr->price[j];
            }
            else if((ptr->price[j])<(ptr->max_price[j])){
                break;
            }
            if(ptr->price[j]=='\0'){
                for(int k=0;(ptr->name[k])!='\0';k++){
                    ptr->max_name[k]=ptr->name[k];
                }
                for(int k=0;(ptr->amount[k])!='\0';k++){
                    ptr->max_amount[k]=ptr->amount[k];
                }
            }
        }
    }
    printf("\nMost expensive article:\nName -> ");
    for(i=0;(ptr->max_name[i])!='\0';i++){
        printf("%c", ptr->max_name[i]);
    }
    printf("\nPrice -> ");
    for(i=0;(ptr->max_price[i])!='\0';i++){
        printf("%c", ptr->max_price[i]);
    }
    printf("\nAmount -> ");
    for(i=0;(ptr->max_amount[i])!='\0';i++){
        printf("%c", ptr->max_amount[i]);
    }
    free(ptr);
    return 0;
}