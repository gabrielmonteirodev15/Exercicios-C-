#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando WHILE, um programa que imprima na tela os
 números de 100 a 0 em um intervalo de um decimo de segundo.
*/
main(){
	int cont;
	
	printf("Imprimindo de 100 a 0 usando WHILE \n");
	
	while(cont <= 100){
		printf("%d ", cont);
		Sleep(10);
		cont++;
	}
}
