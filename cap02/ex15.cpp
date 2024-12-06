#include<stdio.h>
#include<windows.h>
#include<math.h>

//Crie um programa em C que receba do usuário dois números, calcule e mostre o dobro e o 
//triplo do primeiro numero e o produto do primeiro pelo segundo numero.
 main(){
 	system("cls");
 	int num1 , num2 , dobro , triplo , produto;
 	
 	printf("Digite dois numeros: \n");
 	scanf("%d%d" , &num1 , &num2);
 	
 	dobro = num1 * 2;
 	triplo = num1 * 3;
 	
 	printf("O dobro e o triplo do primeiro numero e : %d e %d \n" , dobro , triplo);
 	
 	produto = num1 * num2;
 	
 	printf("O produto do primeiro pelo segundo e : %d \n" , produto);
 	
 	system("pause");
 }
 
 
