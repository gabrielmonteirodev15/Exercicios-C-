#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando DO WHILE, um programa que identifique se um numero e PAR, IMPAR e 0 para sair.
*/
main(){
	int numero;
	
	printf("Verificar se um numero e par ou impar \n");
	
	do{
		numero = 0;
		printf("Digite 0 para sair \n");
		printf("Digite um numero \n");
		scanf("%d", &numero);
	
		if(numero == 0){
			break;
		}
		if(numero % 2 == 0){
			printf("O numero %d e par \n\n" , numero);
		}
		else{
			printf("O numero %d e impar \n\n");
		}
		
	}while(numero != 0);
}
