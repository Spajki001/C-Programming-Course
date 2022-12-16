#include <stdio.h>

int main(void){
	int a=1;
	int b=1;
	for (int i=1; i<=20; i++){
		printf("FOR\n");
	}
	while (a<=20){
		printf("while\n");
		a++;
	}
	do{
		printf("do while\n");
		b++;
	}while (b<=20);
	return 1;
}
