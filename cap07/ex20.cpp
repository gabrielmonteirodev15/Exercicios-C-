#include<stdio.h>
#include<windows.h>

/*
Crie um vetor com 6 inteiros e ordene o vetor em ordem crescente
*/
main(){
	int vetor[6], indice, indice1, tamanho, a;
	
	printf("Digite os numeros do vetor \n");
	
	for(indice =0; indice <=5; indice++){ //Laço para preencher o vetor 
		printf("Digite os para o vetor \n");
		scanf("%d", &vetor[indice]); //Entrada dos numeros para o vetor
	}
	
	tamanho = sizeof(vetor[0]); //Pega o tamanho do vetor
	
	for(indice = 0; indice < tamanho - 1; indice++){ //Laço para percorrer o vetor
		for(indice1 = 0; indice1 < tamanho - indice -  1; indice1++){ //Laço interno para ordenar os numeros 
			if(vetor[indice1] > vetor[indice1 + 1]){ //Verifica se o numero atual do vetor é maior que o proximo 
				//Se for maior vai trocar as ordens do numeros 
				a = vetor[indice1];  
				vetor[indice1] = vetor[indice1 + 1];
				vetor[indice1 + 1] = a;
			}
		}
	}
	
	printf("Mostrando em ordem \n");
	for(indice = 0; indice <= 5; indice++){ //Laço para mostra o vetor em ordem
		printf("[%d] ", vetor[indice]);
	}
	
}
