#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

/*
Crie um vetor de 20 inteiros e preencha-o com valores aleatórios entre 0 e 100. Depois, imprima o vetor na tela.
*/
main(){
	int vetor[20], indice;
	
	printf("Gerando um vetor com numeros aleatorios ... \n");
	
	srand(time(NULL));
	
	for(indice = 0; indice <= 19; indice++){ //Laço para preencher o vetor
		vetor[indice] = rand() % 100 + 1; //Gera numeros aleatorios entre 1 a 100 para preencher o vetor
	}	
	
	
	for(indice = 0; indice <= 19; indice++){ //laço para mostrar o vetor na tela
		printf("[%d] ", vetor[indice]);
	}
}
