#include<stdio.h>

/*
Escreva um programa em C que calcule o fatorial de um número inteiro não negativo. Utilize um laço for 
*/
 main(){
 	int fatorial, numInicial, cont;
 	
 	printf("Programa para calculo de fatorial \n");
 	
 	printf("Digite o numero para fazer o fatorial \n");
 	scanf("%d", &numInicial); //Entrada do numero base para fazer o fatorial
 	
 	//Inicia a variavel fatorial com o numero base 
 	fatorial = numInicial;
 	
 	//Laço for para calcular o fatorial
	//Inicial o contador com o numero base - 1 e faz o decremento do contador ate 1
 	for(cont = numInicial - 1; cont >= 1; cont--){
 		fatorial = fatorial * cont; 
		 //fatorial recebe ele mesmo multiplicado pelo contador 
		 //Num exemplo onde o numero base é 5 o contador sera 4  5 x 4 = 20
		 //Depois o fatorial sera 20 e o contador sera 3 20 x 3 = 60
		 //Assim até o contador chegar em 1
 	}
 	
 	//Mostra o fatorial na tela
 	printf("O fatorial do numero %d e %d", numInicial, fatorial);
 }
