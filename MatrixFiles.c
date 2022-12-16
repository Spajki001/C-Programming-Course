#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    FILE *fp = fopen("./TextAndBinaryFiles/in.txt", "r");
    if (NULL == fp){ 
        return 1;
    }

    int m, n, i, j;

    fscanf(fp, "%d %d", &m, &n);
    fclose(fp);


    float **A = (float**) calloc(m, sizeof(float*));
    for (i = 0; i < m; i++) {
        A[i] = (float*) calloc(n, sizeof(float));
    }
    for(i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            A[i][j]=(int)rand();
        }
    }

    fp = fopen("./TextAndBinaryFiles/out.txt", "w");
    if (NULL == fp){ 
        return 1;
    }

    for(i = 0; i < (m - 1); i++) {
        for (j = 1; j < n; j++) {
            fprintf(fp, "%.2f\t", A[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
}