#include <stdio.h>
#include <stdlib.h>

int main(){
	int br, i, bin[8], p=1, pj=0;
	do{
		printf("Unesi broj: ");
		scanf("%d", &br);
	}while(br<-128||br>127);
	if(br<0){
		p=(-1);
		br*=(-1);
	}
	for(i=0;i<8;i++){
		bin[i]=br%2;
		br/=2;
	}
	if(p<0){
		for(i=0;i<8;i++){
			if(pj==1){
				if(bin[i]==0){
				bin[i]=1;
				}
				else bin[i]=0;
			}
			if(bin[i]==1){
				pj=1;
			}
		}
	}
	for(i=7; i>-1; i--){
		printf("%d", bin[i]);
	}
	return 1;
}
