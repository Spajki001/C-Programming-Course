#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	srand((unsigned) time(NULL));
	
	int bin[32], i;
	for(i=0;i<32;i++){
		bin[i]=((rand()/(float)RAND_MAX)>0.5f?1:0);
	}
	printf("bin: ");
	for(i=0;i<32;i++){
		printf("%d",bin[i]);
	}
	printf("\n");
	if(bin[0]==1){
		int flag=0;
		for(i=0;i<32;i++){
			int bit=bin[i];
			if(flag==1){
				bin[i]=bit==0?1:0;
			}
			if(bit==1){
				flag = 1;
			}
		}
	}
	int dec=0;
	for(i=0;i<32;i++){
		dec+=(int)(bin[i]*pow(2,31-i));
	}
	printf("dec: %d", dec);
	return 0;
}
