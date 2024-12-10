#include<stdio.h>
#include<windows.h>

/*
Crie um vetor de 7 números inteiros e encontre o maior e o menor valor presente nele
*/
main(){
	int vetor[7], indice, maior = 0, menor  = 10000;
	
	printf("Digite os numeros do vetor \n");
	for(indice = 0; indice <= 6; indice++){ //Laço para preencher o vetor
		printf("Digite para posicao %d \n", indice+1);
		scanf("%d", &vetor[indice]); //Entrada dos numeros do vetor
		
		if(maior < vetor[indice]){ //Verifica se o numero colocado no vetor é o maior 
			maior = vetor[indice]; //se for vai armazenar esse numero dentro da variavel maior
		}
		
		if(menor > vetor[indice]){ //Verifica se o numero colocado no vetor é o menor
			menor = vetor[indice];	//se for vai armazenar esse numero dentro da variavel menor
		}
	}
	
	//mostra na tela o maior e o menor
	printf("O maior numero digitado foi %d \n", maior); 
	printf("O menor numero digitado foi %d \n", menor);
}
