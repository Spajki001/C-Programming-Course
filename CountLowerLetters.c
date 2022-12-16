/******************************************************************************************************
Napisati funkciju koja odreðuje i vraæa koliko joj predani string sadrži znakova. Napisati drugu
funkciju koja odreðuje i ispisuje koliko predani string sadrži jedinstvenih malih slova (slova koja
se pojavljuju samo jednom u stringu). U main() funkciji napraviti polje od 90 elemenata tipa char.
Unijeti string sa standardnog ulaza tako da se ne premaši velièina prethodno zauzetog polja. Takoðer
u main() funkciji pozvati napisane funkcije s predanim stringom. Znakovi A, B, ..., Z imaju ASCII
vrijednosti 65, 66, ..., 90, dok znakovi a, b, ..., z imaju ASCII vrijednosti 97, 98, ..., 122, redom.
*******************************************************************************************************/
#include <stdio.h>
#define MAX 91

int duzina_polja(char []);
void jedinstvena_mala_slova(char [], int);

int main(){
	char recenica[MAX];
	int duzina;
	printf("Unesite string do 90 znakova: ");
	fgets(recenica, MAX, stdin);
	duzina=duzina_polja(recenica);
	jedinstvena_mala_slova(recenica, duzina);
		
	return 1;
}

int duzina_polja(char niz_znakova[]){
	int duzina=0;
	for(int i=0; i<MAX; i++){
		if(niz_znakova[i]=='\0'){
			duzina=i;
			break;
		}
	}
	return duzina;
}

void jedinstvena_mala_slova(char niz_znakova[], int duzina){
	int brojac=0, flag=0;
	for(int i=0; i<duzina; i++){
		flag=0;
		for(int j=0; j<duzina; j++){
			if((niz_znakova[i]==niz_znakova[j]&&i!=j)||(niz_znakova[i]<97||niz_znakova[i]>122)){
				flag=1;
				break;
			}
		}
		if(flag==0){
			brojac++;
		}
	}
	printf("Jedinstvenih malih slova je %d.\n", brojac);
}
