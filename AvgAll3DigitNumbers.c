#include <stdio.h>

int main(void){
	int i=100, znam, sum=0, x=0, aritm;
	while (i<=999){
		znam=i%10;
		if (znam%3==0){
			printf(" %d\n", i);
			sum=sum+znam;
			x++;
		}
		i++;
	}
	aritm=sum/x;
	printf(" Aritmeticka sredina tih brojeva je %d.", aritm);
	return 1;
}
