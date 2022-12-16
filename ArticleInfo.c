#include <stdio.h>
#include <stdlib.h>
typedef struct article{
    char name[20];
    float price;
    float amount;
}ARTICLE;
int main()
{
    ARTICLE *ptr = NULL;
    ptr = (ARTICLE*)calloc(3, sizeof(ARTICLE));
    if(ptr == NULL){
    return 1;
}

    int n,i;
    do{
        printf("How many articles: ");
        scanf("%d",&n);
    }while(1>=n||n>=50);
    struct article article[n];
    for(i=0;i<n;i++){
        printf("\nFor %d article, name: ",i+1);
        scanf("%19s",(ptr+i)->name);
        printf("\nFor %d article, price: ",i+1);
        scanf("%f",&(ptr+i)->price);
        printf("\nFor %d article, amount: ",i+1);
        scanf("%f",&(ptr+i)->amount);
    }
    float max = 0;
    int temp = 0;
    for(i=0;i<n;i++){
        if(ptr->price > max){
            max = ptr->price;
            temp = i;

        }
    }
    printf("--------------------------------------------\n");
    printf("Name of the expensive article: %s\n",ptr->name);
    printf("Price of the article: %.2f\n",ptr->price);
    printf("Amount of the article: %.2f\n",ptr->amount);
    free(ptr);
    
    
    return 0;
}