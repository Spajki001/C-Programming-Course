/*Omoguæiti korisniku unos tri cijela broja koji predstavljaju stranice trokuta,
pripaziti prilikom unosa da svaka stranica trokuta bude dva puta veæa od prethodne unesene.
Ispisati stranice trokuta na standardni izlaz u obrnutom smjeru od unosa.*/
#include <stdio.h>

int main(void){
	int a, b, c;
	printf(" Unesite prvu stranicu trokuta: ");
	scanf("%d", &a);
	do{
		printf("\n Unesite drugu stranicu trokuta (2 PUTA VECA OD PRETHODNE): ");
		scanf("%d", &b);
	}while (b<(a*2)||b>(a*2));
	do{
		printf("\n Unesite trecu stranicu trokuta (2 PUTA VECA OD PRETHODNE): ");
		scanf("%d", &c);
	}while (c<(b*2)||c>(b*2));
	printf("\n Stranica c=%d, stranica b=%d, stranica a=%d.", c, b, a);
	return 1;
}
