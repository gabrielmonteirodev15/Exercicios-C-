#include<stdio.h>
#include<windows.h>

/*
Preencher um vetor com 8 n�meros inteiros, e depois solicitar um outro n�mero ao usu�rio. 
Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor e qual a ordem foi digitado. 
Se n�o existir, imprimir a mensagem de que n�o existe.
*/
main(){
	int numero[8], cont, num;
	bool numExiste;

	for(cont = 0; cont <= 7; cont++){
		printf("Digite um numero para posicao %d \n", cont + 1);
		scanf("%d", &numero[cont]);
	}
	
	printf("\nAgora digite um numero \n");
	scanf("%d", &num);
	
	for(cont = 0; cont <= 7; cont++){
		if(num == numero [cont]){
			numExiste = true;
			printf("O numero %d esta dentro do array preenchido \nna posicao %d \n", num, cont + 1);
		}
	}
	if(!numExiste){
		printf("O numero %d nao esta dentro do array preenchido\n ", num);
	}
}

