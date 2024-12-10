#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando DO WHILE, que imprima a palavra FATEC o 
numero de vezes que for digitado em um intervalo de um segundo.
*/
main(){
	int cont = 0, repetidor;
	
	printf("Repetindo a palavra fatec X vezes \n");
	
	printf("Quantas vezes a palavra vai ser repetida \n");
	scanf("%d", &repetidor);
	
	do{
		printf("Fatec \n");
		Sleep(100);
		cont++;
	}while(cont != repetidor);
}

