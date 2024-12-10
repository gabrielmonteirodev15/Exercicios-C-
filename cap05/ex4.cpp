#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando WHILE, um programa que imprima as 
letras de Z a A em um intervalo de um décimo de segundo.
*/
main(){
	char letra;
	
	printf("Imprimindo de A a Z \n");
	letra = 'Z';
	
	while(letra >= 'A'){
		printf("%c ", letra);
		Sleep(10);
		letra--;
	}
}
