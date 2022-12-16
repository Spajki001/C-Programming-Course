#include <stdio.h>

int main(void) {
    FILE *fp = fopen("./TextAndBinaryFiles/Dat.txt", "r");
    if (NULL == fp) { 
        return 1;
    }
    
    int n,i;
    
    fscanf(fp, "%d", &n);
    fclose(fp);
    
    fp = fopen("./TextAndBinaryFiles/Studenti.txt", "w");
    if (NULL == fp){ 
        return 1;
    }
    
    for (i = 0; i < n; i++) {
        char ime[50] = "", prezime[50] = ""; 
        scanf("%s %s", ime, prezime);
        fprintf(fp, "%s %s\n", ime, prezime);
    }
    
    fclose(fp);
    return 0;
}