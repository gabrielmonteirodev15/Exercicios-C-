#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando WHILE, um programa que 
imprima as letras de A a Z em um intervalo de um decimo de segundo.
*/
main(){
	char letra;
	
	printf("Imprimindo de A a Z \n");
	letra = 'A';
	
	while(letra <= 'Z'){
		printf("%c ", letra);
		Sleep(10);
		letra++;
	}
}
