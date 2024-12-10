#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

//Criar um programa em linguagemC que imprima um numero de 100 a 0 com o intervalo de 0,5 segundos.
main(){
	int cont;
	
	printf("Contar de 100 a 0 \n");	
	
	for(cont = 100; cont >= 0; cont--){
		printf("%d ", cont);
		Sleep(50);
	}
}
