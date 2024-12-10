#include<stdio.h>

/*
Escreva um programa em C que calcule a potência de um número inteiro base elevado a expoente, utilizando um laço for.
*/
main(){
	int base, expoente, potencia;
	
	printf("Programa para calculo de potencia \n");
	
	printf("Digite qual sera a base \n");
	scanf("%d", &base); //Entrada do numero da base da potencia 
	
	printf("Digite qual sera o expoente \n");
	scanf("%d", &expoente); //Entrada do numero do expoente
	
	//Inicial a potencia recebendo o numero da base
	potencia = base;
	
	//Laço for para o calculo da potencia
	for(int cont = 1; cont < expoente; cont++){
		//Potencia vai receber ela propria multiplicada pela base 
		//enquanto o contador ser menor que o expoente 
		potencia = potencia * base;
	}
	
	//Mostra na tela a potencia
	printf("A potencia da base %d e com expoente %d e  %d", base, expoente, potencia);
}

