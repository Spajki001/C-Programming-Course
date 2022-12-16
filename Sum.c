#include <stdio.h>

int main(void){
	int m, n, sum;
	printf("Unesi prirodni broj: ");
	scanf("%d", &m);
	if (m<=0){
		main();
	}
	printf("Unesi %d prirodnih brojeva te nakon svakog pritisni ENTER: ", m);
	for (int i=1; i<=m; i++){
		scanf("%d", &n);
		sum+=n;
	}
	printf("Suma upisanih brojeva je %d.", sum);
	return 1;
}
