#include<stdio.h>
#include<windows.h>

//Escreva um programa que use a taxa hor�ria e o n�mero de horas trabalhadas em uma semana e calcule o sal�rio total

main(){
	system("cls"); //Inicio do programa
	
	int valorpHora, horasTra, salario; // Declara��o das variaveis
	
	printf("Programa para calculo do salario semana \n");
	
	printf("Digite quanto vale a hora do funcionario: \n");
	scanf("%d" , &valorpHora); //Leitura da valor da hora de trabalho
	
	printf("Digite quantas horas foi trabalhada \n");
	scanf("%d" ,&horasTra); //Leitura das horas trabalhadas
	
	salario = valorpHora *  horasTra;
	
	printf("O salario do funcionario sera : %d \n" , salario);
	
	system("pause");
}


