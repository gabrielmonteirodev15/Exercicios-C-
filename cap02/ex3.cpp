#include<stdio.h>
#include<math.h>
#include<windows.h>

//Criar um programa em linguagem C que converta sua idade meses, semanas, dias,horas,minutos e segundos.
main(){
	system("cls");
	int idade;
	printf("Programa para calcular idade \n");
	
	printf("Digite sua idade \n");
	scanf("%d" , &idade);
	
	printf("%d anos \n" , idade);
	
	idade = idade * 12;
	printf("%d meses \n" , idade);
	
	idade = idade * 4;
	printf("%d semanas\n" , idade);
	
	idade = idade * 7;
	printf("%d dias \n" , idade);
	
	idade = idade * 24;
	printf("%d horas \n" , idade);
	
	idade = idade * 60;
	printf("%d minutos \n" , idade);
	 
	idade = idade * 60;
	printf("%d segundos \n" , idade);
	
	system("pause");
}



