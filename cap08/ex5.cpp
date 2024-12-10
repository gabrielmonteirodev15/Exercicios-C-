#include<stdio.h>
#include<windows.h>

/*
Faça um programa que leia os elementos de uma matriz inteira de 4 x 4 e imprimir os elementos da diagonal principal.
*/
main(){
	int matriz[4][4], i, j;
	
	printf("Gerando uma matriz \n");
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Preencha a posica %d %d : ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMostrando a matriz gerada \n");
	for(i = 0; i< 4; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
