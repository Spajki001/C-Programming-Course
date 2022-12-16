#include <stdio.h>

int main(void){
	char a[51];
	char b[51];
	int i=0, c1=0, c2=0;
	printf("Unesite znakove prve rijeci: ");
	gets(a);
	printf("Unesite znakove druge rijeci: ");
	gets(b);
	for (i=0; a[i]!='\0'; i++)
	if (a[i]>='A' && a[i]<='Z')
	c1++;
	for (i=0; b[i]!='\0'; i++)
	if (b[i]>='A' && b[i]<='Z')
	c2++;
	if(c1>c2)
		printf("Prva rijec ima vise velikih slova %s", &a);
	else if(c2>c1)
		printf("Druga rijec ima vise velikih slova %s", &b);
	else {
		for(i=0; a[i]!='\0'; i++)
			if (a[i]>='a' && a[i]<='z')
			c1++;
		for(i=0; a[i]!='\0'; i++)
			if (b[i]>='a' && b[i]<='z')
			c2++;
		if(c1>c2)
			printf("Prva rijec ima vise malih slova %s", &a);
		else if(c2>c1)
			printf("Druga rijec ima vise malih slova %s", &b);
		else
			printf("Obje rijeci imaju isto velikih i malih slova %s %s", &a, &b);
	}
	return 1;
}