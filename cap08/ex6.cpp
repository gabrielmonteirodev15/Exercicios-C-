#include<stdio.h>
#include<windows.h>

/*
Faça um programa que lê uma matriz de 3x3 elementos usando um comando for, multiplica cada elemento por 5 e imprime o resultado.
*/
main(){
	int matriz[3][3], i, j;
	
	printf("Gerando uma matriz \n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Preencha a posica %d %d : ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	

	for(i = 0; i< 3; i++){
		for(j = 0; j < 3; j++){
			matriz[i][j] = matriz[i][j] * 5;
		}
	}
	
		printf("\nMostrando a matriz gerada \n");
	for(i = 0; i< 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
