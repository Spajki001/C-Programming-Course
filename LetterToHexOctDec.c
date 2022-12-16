#include <stdio.h>

int main(void){
	char znak;
	printf("Unesite znak: ");
	scanf("%c", &znak);
	printf("Znak u heksa je %x, u okta je %o i u dekadskom je %d.", znak, znak, znak);
	return 0;
}
