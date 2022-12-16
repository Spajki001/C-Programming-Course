#include <stdio.h>

int main(void){
	int n, x=1, i;
	printf(" Unesite broj iz intervala [5, 25]: ");
	scanf("%d", &n);
	printf("\n");
	if (n>=5 && n<=25){
		for (i=1; i<=n; i++){
			x=1;
			while (x<=i){
				printf("*");
				x++;
			}
			printf("\n");
		}
	}
	return 1;
}
