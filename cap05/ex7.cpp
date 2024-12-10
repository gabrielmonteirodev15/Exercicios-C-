#include<stdio.h>
#include<windows.h>

/*
 Criar em linguagem C e utilizando o comando DO WHILE, um programa que 
 imprima uma contagem regressiva do numero que você digitar.
*/
main(){
	int cont = 0, inicio; 
	
	printf("Contagem regressiva \n");
	
	printf("Em que numero vai comecar a contagem? \n");
	scanf("%d", &inicio);
	
	do{
		printf("%d ", inicio);
		inicio--;
	}while(inicio != cont - 1);
}
