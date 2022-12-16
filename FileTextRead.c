#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE_DIR "./TextAndBinaryFiles/"

int main(){
    FILE *pfw = NULL;
    char fileName[30], row[1024];
    int i;
    printf("Enter file name: ");
    fgets(fileName, 29, stdin);
    i = 0;
    while(fileName[i] != '\n' && i < 29) i++;
    fileName[i] = '\0';
    char* finalName = malloc (strlen(BASE_DIR) + strlen(fileName) + 1);
    sprintf (finalName, "%s%s", BASE_DIR, fileName);
    pfw = fopen(finalName, "r");
    if(pfw == NULL){
        printf("Error accessing the file. Ending program...\n");
        return 1;
    }
    while(!feof(pfw)){
        fgets(row, 1023, pfw);
        printf("%s", row);
    }
    fclose(pfw);
    free (finalName);
    return 0;
}