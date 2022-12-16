#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("\nInput the number of rows: ");
    scanf("%d", &n);
    
    // Rows
    for(int i = 0; i < n; i++){
        
        // Last row
        if(i == n - 1){
            for(int j = 1; j <= n * 2 - 1; j++){
                printf("*");
            }
            break;
        }

        // Space outside the pyramid
        for(int j = 0; j != n - 1 - i; j++){
            printf(" ");
        }
        
        // Left pyramid wall
        printf("*");

        // Spaces
        for(int j = 0; j < i + i - 1; j++){
            printf(" ");
        }

        // Print in every row except the first one
        if(i != 0){
            
            // Right pyramid wall
            printf("*");
        }
        
        // New row
        printf("\n");
    }
    return 1;
}