#include <stdio.h>

int main(void){
	int broj;
	printf("Unesite broj izmedju 10 i 50: ");
	scanf("%d", &broj);
	while (broj<=10||broj>=50){
		printf("\nUnijeli ste krivi broj! ");
		printf("\nUnesite broj izmedju 10 i 50: ");
		scanf("%d", &broj);
	}
	printf("Broj %d je veci od 10 i manji od 50.", broj);
	return 1;
}
