#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int choice, i;
    char word[36], wordEncrypted[36];
    system("cls");
    printf("Type the number corresponding to your choice.\n");
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("3. Exit\n");
    printf("\nYour choice: ");
    scanf("%d", &choice);
    getchar();
    switch(choice){
        case 1:
            printf("\nInput the string you want to encrypt: ");
            fgets(word, 35, stdin);
            for(i = 0; word[i] != '\0'; i++){
                wordEncrypted[i] = word[i] + 1;
            }
            printf("Encrypted string -> %s", wordEncrypted);
            break;

        case 2:
            printf("\nInput the string you want to decrypt: ");
            fgets(wordEncrypted, 35, stdin);
            for(int i = 0; wordEncrypted[i] != '\0'; i++){
                word[i] = wordEncrypted[i] - 1;
            }
            printf("Decrypted string -> %s\n", word);
            break;
        
        case 3:
            printf("\nEnd of the program!");
            return 1;
        
        default:
            printf("\nEnd of the program!");
            return 1;
    }
    printf("\nEnd of the program!");
    return 1;
}