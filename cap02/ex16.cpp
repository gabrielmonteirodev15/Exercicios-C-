#include<stdio.h>
#include<windows.h>


//Escreva um programa que leia a  largura e a altura de um ret�ngulo, calcule e exiba a �rea.
main(){
	system("cls"); //Inicio do programa  
	
	float lar , alt ,area; // declara��o das variaveis
	
	printf("Programa para calculo da area de um retangulo \n");
	
	printf("Digite a largura do retangulo: \n");
	scanf("%f", &lar); //Leitura da largura
	
	printf("Digite a altura do retangulo: \n");
	scanf("%f", &alt); //Leitura da altura
	
	area = lar * alt; //Calculo da area
	
	printf("A area do retangulo e : %.2f \n " , area);
	system("pause");
}


