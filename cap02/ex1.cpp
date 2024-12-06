#include<windows.h>
#include<stdio.h>
#include<math.h>

//Criar um programa em linguagem C que efetue a soma de dois números dos tipo real.
main(){
	system("cls"); //Inicia o programa
	
	float num1, num2 , res;
	
	printf("Programa para calculo de dois numeros \n");
	printf("Digite os numeros:\n");
	
	scanf("%f", &num1);
	
	printf("+");
	
	scanf("%f" , &num2);
	
	res = num1 + num2;
	
	printf("A soma e : %.2f \n" , res);
	
	system("pause");
}



