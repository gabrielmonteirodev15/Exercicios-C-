#include<stdio.h>
#include<windows.h>

/*
Faça um programa em C que imprima  8 números de uma sequência de Fibonacci 
onde os dois primeiros números sejam fornecidos pelo o usuário.
*/
main(){
 	int a, b, proximo, cont = 1;
 	
 	printf("Sequencia de Fibonacci \n");
 	
 	printf("Digite o primeiro numero da sequencia \n");
 	scanf("%d", &a); //Entrada do primeiro termo da sequencia 
 	
 	printf("Digite o segundo numero da sequencia \n");
 	scanf("%d", &b); //Entrada do segundo termo da sequencia 
 	
 	printf("\n%d %d ", a, b); //Imprime os primeiros termos da sequencia 
 	
	 while(cont <= 8){ //Laço while que vai calcular os 8 termos da sequencia
		proximo = a + b; // calculo do proximo termo da sequencia 
		printf("%d ", proximo); //Imprime o proximo termo 
		a = b; //Troca a por b 
		b = proximo; //Troca b pelo o proximo 
		cont++;
 	}
}
