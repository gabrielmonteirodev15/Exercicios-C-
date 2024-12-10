#include<stdio.h>
#include<windows.h>
#include <math.h>

/*
Faça um programa que lê uma matriz de 4x3 elementos usando um comando for, e crie uma outra matriz para receber a 
raiz quadrada dos elementos lidos na primeira matriz. Imprimir a nova matriz na tela.
*/
main(){
	float matriz[4][3], nova[4][3];
	int i, j;
	
	for(i = 0; i < 4; i++){
		for(j= 0; j < 3; j++){
			printf("Digite o numero para a posicao %d %d : \n", i + 1, j + 1);
			scanf("%f", &matriz[i][j]);
		}	
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			nova[i][j] = sqrt(matriz[i][j]);
		}
	}
	
	for(i = 0; i < 4;i++){
		for(j = 0; j < 3; j++){
			printf("%f ", nova[i][j]);
		}
		printf("\n");
	}
}
