#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

void insertIntoSorted(NODE **sorted_ref, NODE *new_node){
    NODE *current;
    if((*sorted_ref == NULL) || ((*sorted_ref)->data >= new_node->data)){
        new_node->next = *sorted_ref;
        *sorted_ref = new_node;
    }
    else{
        current = *sorted_ref;
        while ((current->next != NULL) && (current->next->data < new_node->data)){
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

NODE *createNewNode(int x){
    NODE *newNode = (NODE *)malloc(sizeof(NODE));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

int main(){
    int num;
    NODE *first = NULL, *newNode, *temp;
    do{
        printf("Enter value: ");
        scanf("%d", &num);
        if(num > 0){
            newNode = createNewNode(num);
            insertIntoSorted(&first, newNode);
        }
    }while(num > 0);
    temp = first;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    temp = first;
    while(temp->next != NULL){
        first = temp->next;
        free(temp);
        temp = temp->next;
    }
    return 0;
}