#include<stdio.h>
#include<windows.h>

/*
Preencher um vetor com 8 números inteiros fornecidos pelo usuário. Calcular a média dos valores do vetor. 
Mostrar quantos números são múltiplos de 5, quantos números são maiores que 10 e menores que 30, e qual o maior número do vetor.
*/
main(){
	int numeros[8], indice, media = 0, mult5 = 0, maiores10 = 0, menores30 = 0, maior = 0;
	
	for(indice = 0; indice <= 7; indice++){
		printf("Digite um numero para ser armazenado no vetor \n");
		scanf("%d", &numeros[indice]);
		media = media + numeros[indice];
		
		if(numeros[indice] % 5 == 0){
			mult5 += 1;
		}
		
		if(numeros[indice] > 10){
			maiores10 += 1;
		}
		
		if(numeros[indice] < 30){
			menores30 += 1;
		}
		
		if(maior < numeros[indice]){
			maior = numeros[indice];
		}
	}
	media = media / 8;
	printf("A media dos numeros dos vetores e de %d \n", media);
	printf("A quantidade de numeros que sao multiplos de 5 e de %d \n", mult5);
	printf("A quantidade de numeros que sao maiores que 10 e de %d \n", maiores10);
	printf("A quantidade de numeros que sao menores que 30 e de %d \n", menores30);
	printf("O maior numero armazenado e de %d \n", maior);
}
