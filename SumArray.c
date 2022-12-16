/******************************************************************************************************
Napisati funkciju koja raèuna sumu znamenaka predanog joj cijelog broja. U main() funkciji omoguæiti
korisniku unos iskljuèivo pozitivnih vrijednosti (ako je unos negativan broj, ponoviti unos) u
cjelobrojno polje od 20 elemenata. Pozvati napisanu funkciju sa svakim elementom polja kao argumentom
i ispisati na ekran povratnu vrijednost (vrijednost ispisati jednu ispod druge).
*******************************************************************************************************/
#include <stdio.h>
#define N 20

int suma(int);

int main(){
	int i, polje[N];
	for(i=0; i<N; i++){
		do{
			scanf("%d", &polje[i]);
		}while (polje[i]<0);
	}
	for(i=0; i<N; i++){
		printf("Suma znamenaka je: %d\n", suma(polje[i]));
	}
	
	return 1;
}

int suma(int el_polja){
	int znamenka, zbroj=0;
	while(el_polja>0){
		znamenka=el_polja%10;
		zbroj=zbroj+znamenka;
		el_polja=el_polja/10;
	}
	return zbroj;
}
