#include <stdio.h>
#include <math.h>

int main(){
	int bin[8]={0};
	int dec, i;
	for(i=0; i<8; i++){
		printf("int[%d]= ", i);
		scanf("%d", &bin[i]);
	}
	for(i=0; i<8; i++){
		dec+=bin[i]*pow(2, (7-i));
	}
	printf("Dekadski broj je %d.", dec);
	return 0;
}
