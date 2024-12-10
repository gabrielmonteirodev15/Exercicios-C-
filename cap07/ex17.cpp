#include<stdio.h>
#include<windows.h>

/*
Crie um vetor de 5 inteiros e calcule a soma de todos os elementos desse vetor.
*/
main(){
	int vetor[5], indice, soma = 0;
	
	printf("Soma dos numeros do vetor \n");
	
	for(indice = 0; indice <= 4; indice++){ //Laço para preencher o vetor
		printf("Digite para a posicao %d \n", indice+1);
		scanf("%d", &vetor[indice]); //Entrada dos numeros para o vetor
		soma = soma + vetor[indice]; //Soma o numero digitado do vetor com a soma
	}

	//Mostra na tela a soma dos numeros do vetor	
	printf("A soma dos numeros do vetores e %d \n", soma);
}
