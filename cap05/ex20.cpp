#include<stdio.h>
#include<windows.h>

/*
Desenvolva um programa que leia n�meros inteiros at� que o usu�rio digite 0. No final, exiba a soma dos n�meros digitados.
*/
main(){
	int numero, soma;
	
	printf("Calculo da soma de varios numeros digitados pelos os usuarios \n");
	
	while(numero != 0){ //La�o while vai ser repetido at� o usuario digitar 0 
		printf("Digite um numero para ser somado (0 para sair) \n");
		scanf("%d", &numero); //Entrada dos n�meros
		
		soma += numero; //Calcula o soma dos n�meros digitados 
	}
	printf("A soma dos numeros digitados e de %d \n", soma ); //Imprime a soma dos n�meros 
}

