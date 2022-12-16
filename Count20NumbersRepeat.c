#include <stdio.h>

int main(void){
	int fp[20], nula=0, jedan=0, dva=0, tri=0, cetiri=0, pet=0, sest=0, sedam=0, osam=0, devet=0;
	printf(" Unesite 20 cijelih brojeva [0, 9]: ");
	for (int i=0; i<20; i++){
		scanf(" %d", &fp[i]);
		while (fp[i]<0 || fp[i]>9){
			printf("\n Broj nije u intervalu [0, 9]. ");
			scanf("%d", &fp[i]);
		}
	}
	for (int broj=0; broj<10; broj++){
		for (int i=0; i<20; i++){
			if(fp[i]==broj){
				switch (broj){
					case 0:
						nula++;
						break;
					case 1:
						jedan++;
						break;
					case 2:
						dva++;
						break;
					case 3:
						tri++;
						break;
					case 4:
						cetiri++;
						break;
					case 5:
						pet++;
						break;
					case 6:
						sest++;
						break;
					case 7:
						sedam++;
						break;
					case 8:
						osam++;
						break;
					case 9:
						devet++;
						break;
				}
			}
		}
	}
	printf("\n Broja nula ima %d puta.", nula);
	printf("\n Broja jedan ima %d puta.", jedan);
	printf("\n Broja dva ima %d puta.", dva);
	printf("\n Broja tri ima %d puta.", tri);
	printf("\n Broja cetiri ima %d puta.", cetiri);
	printf("\n Broja pet ima %d puta.", pet);
	printf("\n Broja sest ima %d puta.", sest);
	printf("\n Broja sedam ima %d puta.", sedam);
	printf("\n Broja osam ima %d puta.", osam);
	printf("\n Broja devet ima %d puta.", devet);
	return 1;
}