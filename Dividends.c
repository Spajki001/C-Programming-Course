#include <stdio.h>

int main(void){
	int n, i=1;
	printf(" Upisite cijeli broj: ");
	scanf("%d", &n);
	while (i<=n){
		if (n%i==0){
			printf(" %d\n", i);
		}
		i++;
	}
	main();
	return 1;
}
