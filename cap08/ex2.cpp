#include<stdio.h>
#include<windows.h>


/*
Fa�a um programa que l� tr�s palavras do teclado e imprime as tr�s palavras(maximo 30 caracteres cada) 
na ordem inversa que foram digitadas.
*/
main(){
	char palavras[3][30];
	int indice;
	
	for(indice = 0; indice < 3; indice++){
		printf("Digite uma palavra \n");
		gets(palavras[indice]);
	}
	
	for(indice = 3; indice >= 0; indice--){
		printf("\n%s", palavras[indice]);
	}
}
