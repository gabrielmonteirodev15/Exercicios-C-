#include<stdio.h>
#include<windows.h>
#include<math.h>

//Escreva um programa que pe�a valores para os catetos de um tri�ngulo ret�ngulo e 
//calcule a hipotenusa usando o Teorema de Pit�goras.

main(){
	system("cls"); //Inicio do programa
	
	int cat1, cat2 , hipo; // Declara��o das variaveis
	
	printf("Programa para o calculo da hipotenusa \n");
	
	printf("Digite o primeiro cateto: \n");
	scanf("%d", &cat1); //Leitura do primeiro cateto
	
	printf("Digite o segundo cateto: \n");
	scanf("%d" , &cat2); //Leitura do segundo cateto
	
	hipo = sqrt( (cat1 * cat1) + (cat2 * cat2) ); //Calculo do quadrado da hipotenusa
	
	printf("A  hipotenusa e de %d \n" , hipo);
	system("pause");
}


