#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char word[30];
    FILE *fp = fopen("./TextAndBinaryFiles/Words.txt", "r");
    if(fp == NULL){
        printf("Error accessing the file. Ending program...\n");
        return 1;
    }
    FILE *fw = fopen("./TextAndBinaryFiles/FilteredWords.txt", "w");
    while(fgets(word, sizeof(word), fp)){
        if (strlen(word) == 6){
            fprintf(fw, "%s", word);
        }
    }
    fclose (fw);
    fclose (fp);
    return 1;
}