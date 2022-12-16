#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int m[150], i;
	float nasum;
	
	srand ((unsigned) time (NULL));
	
	for (i=0; i<150; i++){
		nasum=(float)rand()/RAND_MAX;
		if (nasum<0.5){
			m[i]=0;
		}
		else m[i]=1;
		printf("%d -> %d\n", i, m[i]);
	}
	return 1;
}
