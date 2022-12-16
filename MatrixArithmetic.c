#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    int n, m, aritm, temp;
    srand((unsigned)time(NULL));

    do{
        printf("Unesite vrijednost n: ");
        scanf("%d", &n);
        printf("\n");
    }while(n<7||n>=28);
    do{
        printf("Unesite vrijednost m: ");
        scanf("%d", &m);
        printf("\n");
    }while(m<1||m>28);

    int array[n][m];

    for(int i=0;i<n;i++){
        aritm = 0;
        temp = 0;
        for(int j=0;j<m;j++){
            array[i][j]=(int)rand() % 90 + 10;
            if(i%2!=0){
                aritm += array[i][j];
                temp ++;
            }
        }
        if(i%2!=0){
            aritm = aritm/m;
            printf("Aritm. sredina red %d je: %d\n", i, aritm);
        }
    }
    printf("\n");
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 1;
}