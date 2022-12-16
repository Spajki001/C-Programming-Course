#include <stdio.h>

int main(void){
	char s[81];
	int i, zb=0;
	printf(" Unesite jedan string: ");
	gets(s);
	for (i=0; s[i]!='\0'; i++){
		if ((s[i]=='m' || s[i]=='M') && (s[i+1]=='a' || s[i+1]=='A'))
		zb++;
	}
	printf("Kolicina sloga 'ma' je %d", zb);
	return 1;
}