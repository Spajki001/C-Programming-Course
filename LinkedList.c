#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE_DIR "./TextAndBinaryFiles/"

typedef struct container{
    int sensor;
    struct container *next;
}CONTAINER;

int main(){
    CONTAINER *first = NULL, *newContainer, *temp;
    int value, i;
    char fileName[50];
    FILE *fp;
    printf("Enter file name: ");
    fgets(fileName, 49, stdin);
    i = 0;
    while(fileName[i] != '\n'){
        i++;
    }
    fileName[i] = '\0';
    char* finalName = malloc (strlen(BASE_DIR) + strlen(fileName) + 1);
    sprintf (finalName, "%s%s", BASE_DIR, fileName);
    fp = fopen(finalName, "w");
    printf("Enter sensor value: ");
    scanf("%d", &value);
    printf("Memory: %d\n", sizeof(CONTAINER));
    while(value > 0){
        newContainer = (CONTAINER *)malloc(sizeof(CONTAINER));
        newContainer->sensor = value;
        newContainer->next = NULL;
        if(first == NULL){
            first = newContainer;
            temp = newContainer;
        }
        else{
            temp->next = newContainer;
            temp = newContainer;
        }
        printf("Enter sensor value: ");
        scanf("%d", &value);
    }
    temp = first;
    while(temp != NULL){
        printf("%d ", temp->sensor);
        fprintf(fp, "%d ", temp->sensor);
        temp = temp->next;
    }
    temp = first;
    while(temp != NULL){
        first = temp->next;
        free(temp);
        temp = first;
    }
    fclose(fp);
    free(finalName);
    return 0;
}