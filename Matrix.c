/***************************************************************************************************
Kreirati dvodimenzionalno polje koje predstavlja kvadratnu matricu m*m i omoguæiti korisniku unos
dimenzije gdje je 6<=m<13 i paran. Omoguæiti korisniku da popuni matricu brojevima i ispisati
koji element unosi. Pronaæi maksimalni broj u matrici i od njega oduzeti ostale elemente matrice
te spremiti razliku u matricu. Ispisati matricu prije i poslije ove operacije.
****************************************************************************************************/

#include <stdio.h>
#define MAX 12

int main(){
	int i, j, m, max_el, matrica[MAX][MAX];
	do{
		scanf("%d", &m);
	}while(m<6||m>=13||m%2!=0);
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			printf("Unesite element s indexom %d %d: ", i, j);
			scanf("%d", &matrica[i][j]);
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			printf("%d\t", matrica[i][j]);
		}
		printf("\n");
	}
	max_el=matrica[0][0];
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			if(max_el<matrica[i][j]){
				max_el=matrica[i][j];
			}
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			matrica[i][j]=max_el-matrica[i][j];
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			printf("%d\t", matrica[i][j]);
		}
		printf("\n");
	}
	
	return 1;
}
