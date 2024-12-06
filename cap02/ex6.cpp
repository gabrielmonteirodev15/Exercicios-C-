#include<stdio.h>
#include<math.h>
#include<windows.h> 

//Criar um programa em linguagem C que faça a conversão de 4 bits( NIBLE ) em um numero decimal.

main(){
	system("cls");
	
	int num , x1, x2, x3 , x4;
	printf("Conversor de binario para decimal \n");
	printf("Digite os bits: \n");
	
	scanf("%d %d %d %d" , &x1, &x2, &x3 , &x4);
	
	num = (x1 * 8) + (x2 * 4) + (x3 * 2) + (x4 * 1);
	printf("O numero em decimal e : %d \n ", num);
	system("pause");
}


