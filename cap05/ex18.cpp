#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

/*
Desenvolva um jogo simples de adivinha��o, onde o usu�rio deve adivinhar um n�mero entre 1 e 10. 
O programa deve dar dicas e permitir novas tentativas at� que o usu�rio acerte.
*/
main(){
	int numero, resposta, tentativas;
	
	printf("Jogo de adivinhacao \n");
	
	srand(time(NULL));
	numero = rand() % 10 + 1; //Gera um numero aleatorio 
	
	
	printf("Um numero de 1 a 10 foi gerado \n");
	printf("Tente acertar o numero gerado \n");
	
	while(resp != numero){ //La�o vai repetir at� o usuario acertar o numero 
		printf("Numero: ");
		scanf("%d", &resposta); //Entrada da resposta do usuario 
		
		if(resposta < numero){ //Verifica se a resposda do usuario �  menor que o numero gerado 
		//Se for vai mostrar uma mensagem que o numero gerado � maior que a resposta
			printf("\nO numero que eu pensei e maior que %d \n", resposta);
		}
		if(resposta > numero){ //Verifica se a resposda do usuario �  maior que o numero gerado 
		//Se for vai mostrar uma mensagem que o numero gerado � menor que a resposta
			printf("\nO numero que eu pensei e menor que %d \n", resposta );
		}
		tentativas++; //Contagem de tentativas
	}
	printf("Voce acertou!!!  o numero era %d \nvoce teve %d tentativas \n", numero, tentativas); //Mostra o resultado 
}
