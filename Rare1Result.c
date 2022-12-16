#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand ((unsigned) time (NULL));
	double *p;
	int n;
	n=50+(int)rand()/RAND_MAX*(1000-50);
	p=(double*) malloc(n);
	if (p==NULL){
		return 0;
	}
	for(int i=0; i<n; i++){
		p[i]=(float)rand()/RAND_MAX;
		if(p[i]==1){
			printf("%d -> 1\n", i);
		}
		else printf("%d -> 0\n", i);
	}
	return 1;
}
