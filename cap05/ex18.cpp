#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

/*
Desenvolva um jogo simples de adivinhação, onde o usuário deve adivinhar um número entre 1 e 10. 
O programa deve dar dicas e permitir novas tentativas até que o usuário acerte.
*/
main(){
	int numero, resposta, tentativas;
	
	printf("Jogo de adivinhacao \n");
	
	srand(time(NULL));
	numero = rand() % 10 + 1; //Gera um numero aleatorio 
	
	
	printf("Um numero de 1 a 10 foi gerado \n");
	printf("Tente acertar o numero gerado \n");
	
	while(resp != numero){ //Laço vai repetir até o usuario acertar o numero 
		printf("Numero: ");
		scanf("%d", &resposta); //Entrada da resposta do usuario 
		
		if(resposta < numero){ //Verifica se a resposda do usuario é  menor que o numero gerado 
		//Se for vai mostrar uma mensagem que o numero gerado é maior que a resposta
			printf("\nO numero que eu pensei e maior que %d \n", resposta);
		}
		if(resposta > numero){ //Verifica se a resposda do usuario é  maior que o numero gerado 
		//Se for vai mostrar uma mensagem que o numero gerado é menor que a resposta
			printf("\nO numero que eu pensei e menor que %d \n", resposta );
		}
		tentativas++; //Contagem de tentativas
	}
	printf("Voce acertou!!!  o numero era %d \nvoce teve %d tentativas \n", numero, tentativas); //Mostra o resultado 
}
