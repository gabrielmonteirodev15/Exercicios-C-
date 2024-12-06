#include<stdio.h>
#include<windows.h>

//Escreva um programa que leia  para a  aresta de um cubo e calcule o volume.
main(){
	system("cls"); //Inicio do programa
	
	float ares, vol; // Declaração das variaveis
	
	printf("Programa para calculo do volumo de um cubo \n");
	
	printf("Digite o valor da aresta do cubo: \n");
	scanf("%f", &ares); //Leituras do valor das arestas
	
	vol = ares * ares * ares; //Calculo do volume
	
	printf("O volumo do cubo e %.2f \n " , vol);
	
	system("pause");
}



