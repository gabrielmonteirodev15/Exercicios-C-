#include<stdio.h>
#include<windows.h>
#include<math.h>

//Crie um programa em C que receba a temperatura em °C(graus Celsius), e converta para Fahrenheit e para Kelvin.
main(){
	system("cls");
	float cel , fah , kel;
	
	printf("Conversor de temperaturas \n");
	
	printf("A temperatura em Graus Celsius \n");
	scanf("%f" , &cel);
	
	fah = (1.8 * cel) + 32;
	kel = cel + 273.15;
	
	printf("Convertido as temperatura fica : \n Fahrenheit : %.2f \n Kelvin : %.2f \n" , fah, kel);
	
	system("pause");
	
}


