#include <stdio.h>

int main(void){
	int q;
	printf(" Unesite kolicinu zeljenih polja: ");
	scanf("%d", &q);
	while (q<5 || q>12){
		printf("\n Unesite kolicinu zeljenih polja: ");
	scanf("%d", &q);
	}
	float fp[q];
	for (int i=0; i<q; i++){
		scanf("%f", &fp[i]);
		if(i%2==0){
			fp[i]=fp[i]/10.0f;
		}
		else if(i%2!=0){
			fp[i]=fp[i]/(-10.0f);
		}
	}
	for (int i=0; i<q; i++){
		printf(" %f,", fp[i]);
	}
	return 1;
}