#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

//Criar um programa em linguagem
//C que imprima um numero de 0 a 100 com o intervalo de 0,5 segundos.


main(){
	int cont;
	
	printf("Contar de 0 a 100 \n");	
	
	for(cont = 0; cont <= 100; cont++){
		printf("%d ", cont);
		Sleep(50);
	}
}
