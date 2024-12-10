#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

/*
Preencha dois vetores de 10 posições com valores inteiros aleatórios entre 1 a 20. Depois deve ser gerado outro vetor de 10 posições, de acordo com as regras: 
- As posições pares do novo vetor devem conter a subtração dos elementos do vetor1 pelo vetor2 nas mesmas posições; 
- As posições impares do novo vetor devem conter o produto entre os elementos do vetor1 e do vetor2 nas mesmas posições;
Ao final, exibir os 3 vetores.
*/
main(){
	int vetor1[10], vetor2[10], vetor3[10], indice, posicaoPar = 0, posicaoImpar = 1;
	
	srand(time(NULL));
	for(indice = 0; indice <=9; indice++){
		vetor1[indice] = rand() % 20 + 1;
	}
	for(indice = 0; indice <=9; indice++){
		vetor2[indice] = rand() % 20 + 1;
	}
	
	for(indice = 0; indice <=9; indice++){
		if(indice % 2 == 0){
			vetor3[indice] = vetor1[indice] - vetor2[indice];
		}
		else if(indice % 2 != 0){
			vetor3[indice] = vetor1[indice] * vetor2[indice];
		}
	}
	printf("Mostando o vetor 1 \n");
	for(indice = 0; indice <= 9; indice++){
		printf("[%d] ", vetor1[indice]);
	}
	
	printf("\nMostando o vetor 2 \n");
	for(indice = 0; indice <= 9; indice++){
		printf("[%d] ", vetor2[indice]);
	}
	
	printf("\nMostando o vetor 3 \n");
	for(indice = 0; indice <= 9; indice++){
		printf("[%d] ", vetor3[indice]);
	}
}
