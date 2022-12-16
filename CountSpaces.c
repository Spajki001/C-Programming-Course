#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char *p;
	int dStr, zbroj=0;
	printf(" Unesite velicinu stringa: ");
	scanf("%d", &dStr);
	char praviString[dStr];
	p=(char*) malloc (dStr+1);
	if(p==NULL){
		return 0;
	}
	getchar();
	printf(" Unesite zeljeni string: ");
	fgets (praviString,dStr,stdin);
	for(int i=0;praviString[i]!='\0';i++){
		if (praviString[i]==' '){
			zbroj++;
		}
	}
	printf("\n U unesenom stringu ima %d razmaka.", zbroj);
	free(p);
	
	return 1;
}