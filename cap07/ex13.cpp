#include<stdio.h>
#include<windows.h>

/*
Faça um programa em C que receba um vetor de 6 números inteiros e um número inteiro X, 
e retorne todos os pares de elementos do vetor que somados resultam em X. Os pares podem se repetir, 2 + 4 ou 4 + 2...
*/
main(){
	int vetor[6], indice, x, indice1;
	
	for(indice = 0; indice <= 5; indice++){
		printf("Digite um  numero para a posicao %d do vetor \n", indice+1);
		scanf("%d", &vetor[indice]);
	}
	
	printf("Agora digite um numero inteiro \n");
	scanf("%d", &x);
	
	for(indice = 0; indice <= 5 ; indice++){
		for(indice1 =0; indice1 <= 5; indice1++){
			if(vetor[indice] + vetor[indice1] == x){
				if(indice == indice1){
					continue;
				}
				else{
					printf("\n%d + %d = %d \n", vetor[indice], vetor[indice1], x);
				}
			}
		}
	}
}
