#include<stdio.h>

/*Faça um programa que leia um número inteiro N e exiba todos os 
números pares e ímpares de 1 até N utilizando um laço for.*/
main(){
	int numero;
	
	printf("Programa para mostrar numeros pares e impares dentro de um limite \n");
	
	printf("Digite o numero limite \n");
	scanf("%d", &numero); //Entrada do numero limite 
	
	printf("Numeros par dentro do limite \n");
	//laço for para mostrar apenas os numeros par dentro do limite 
	for(int cont = 0; cont <= numero; cont++){
		//Verifica se o numero do contador é par
		if(cont % 2 == 0){ //Se for par mostrara o numero na tela
			printf("%d ", cont);
		}
	}
	
	printf("\nNumeros impar dentro do limite \n");
	//Laço for para mostrar apenas os numero impar dentro do limite
	for(int cont = 0; cont <= numero; cont++){
		//Verifica se o numero do contador é impar
		if(cont % 2 == 1){ //Se for mostrara o numero na tela
			printf("%d ", cont);
		}
	}
}
