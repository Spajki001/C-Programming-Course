#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define VEL 20

int main(void){
	double m[VEL][VEL];
	int i, j;
	double min=0, max=0;
	
	srand ((unsigned) time (NULL));
	
	for(i=0;i<VEL;i++){
		for(j=0;j<VEL;j++){
			m[i][j]=-5+(double)rand()/RAND_MAX*10;
			if(m[i][j]<min){
				min=m[i][j];
			}
			else if(m[i][j]>max){
				max=m[i][j];
			}
		}
	}
	printf("\n Maksimalna vrijednost iznosi %lf.", max);
	printf("\n Minimalna vrijednost iznosi %lf.", min);
	return 1;
}
