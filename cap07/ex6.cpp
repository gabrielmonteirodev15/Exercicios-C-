#include<stdio.h>
#include<windows.h>

/*
Preencher um vetor com 8 números inteiros fornecidos pelo usuário. 
Mostrar o vetor e informar quantos desses números são maiores que 30, somá-los, e exibir na tela. 
Também deve-se somar todos os números do vetor e exibir na tela.
*/
main(){
	int numeros[8], indice , soma = 0, cont30 = 0, soma30 = 0, numerosMaiores30[8], indice30 = 0, tam;
	
	for(indice = 0; indice <= 7; indice++){
		printf("Digite um para ser armazenado no vetor \n");
		scanf("%d", &numeros[indice]);
		soma = soma + numeros[indice];
		if(numeros[indice] > 30){
			cont30 += 1;
			soma30 = soma30 + numeros[indice];
			numerosMaiores30[indice30] = numeros[indice];
			indice30 += 1;
		}
	}
	
	for(indice = 0; indice <= 7; indice++){
		printf("Numero da posicao %d : %d \n",indice + 1,  numeros[indice]);
	}
	
	printf("Foram armazenados %d numeros que sao maiores que 30 \n", cont30);
	printf("A soma desses numeros maiores que 30 e %d \n", soma30);
	
	tam = sizeof(numerosMaiores30[0]);
	
	printf("Sao os numeros maiores que 30 \n");
	for(indice = 0; indice <= tam; indice++){
		printf("%d ", numerosMaiores30[indice]);
	}
	
	printf("\nA soma de total do vetor e de %d \n", soma);
	
}
