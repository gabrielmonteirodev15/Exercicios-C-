#include<stdio.h>
#include<math.h>
#include<windows.h> 


//Criar um programa em linguagem C que calcule o per�metro e a �rea de uma circunfer�ncia de raio R (fornecido pelo usu�rio).
main(){
	system("cls");
	float raio ,Ci , Ar;
	 printf("Programa para calcular a area e o perimetro de uma circunferencia: \n");
	 printf("Digite o raio da circunferencia \n");
	 
	 scanf("%f" , &raio);
	 
	 Ci = (2 * 3.14 * raio);
	 
	 Ar = 3.14 * (raio * raio);
	 
	 printf("Essa circunferencia tem a area de %.2f e o perimetro de %.2f \n", Ar , Ci);
	system("pause");
}


