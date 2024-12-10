#include<stdio.h>
#include<windows.h>

/*
Desenvolva um programa que leia números inteiros até que o usuário digite 0. No final, exiba a soma dos números digitados.
*/
main(){
	int numero, soma;
	
	printf("Calculo da soma de varios numeros digitados pelos os usuarios \n");
	
	while(numero != 0){ //Laço while vai ser repetido até o usuario digitar 0 
		printf("Digite um numero para ser somado (0 para sair) \n");
		scanf("%d", &numero); //Entrada dos números
		
		soma += numero; //Calcula o soma dos números digitados 
	}
	printf("A soma dos numeros digitados e de %d \n", soma ); //Imprime a soma dos números 
}

