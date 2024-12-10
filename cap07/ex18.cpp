#include<stdio.h>
#include<windows.h>

/*
Dado um vetor de 10 inteiros, conte quantos números pares existem nesse vetor.
*/
main(){
	int vetor[10], indice, par = 0;
	
	printf("Contar quantos numeros pares existem no vetor \n");
	
	for(indice = 0; indice <= 9; indice++){ //Laço para preencher o vetor
		printf("Digite um numero para o vetor \n");
		scanf("%d", &vetor[indice]); //Entrada dos numeros do vetor
	}
	
	
	printf("Contando os numeros par \n"); 
	for(indice = 0; indice <=9; indice++){ //Laço para calcular quantos numeros par existem no vetor
		if(vetor[indice] % 2 == 0){ //Verifica se o numero do vetor é par
			par += 1; //Se for par vai colocar +1 na variavel par
			printf("[%d] ", vetor[indice]); //Se for mostra na tela o numero do vetor
		}
	}
	
	//Mostra na tela a quantidade de numeros par no vetor
	printf("\nExistem %d numeros par o vetor \n", par);
}
