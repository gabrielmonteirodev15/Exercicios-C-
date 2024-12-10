#include<stdio.h>
#include<windows.h>

/*
Solicitar um nome ao usuário e mostrar o primeiro, o último, o quarto, do primeiro ao terceiro, 
do segundo ao ultimo caractere do nome fornecido. Mostrar a posição de cada letra no vetor.
*/

main(){
	char nome[30];
	int tamanho, cont;
	
	system("cls");
	
	printf("Digite o seu nome \n");
	gets(nome);
	
	tamanho = strlen(nome);
	
	printf("Nome digitado %s \n", nome);
	printf("A primeira letra do nome e %c \n", nome[0]);
	printf("A ultima letra do nome e %c \n", nome[tamanho - 1]);
	printf("A quarta letro do nome e %c \n", nome[3]);
	
	printf("Da primeira a terceira letra ");
	for(cont = 0; cont <= 2; cont++){
		printf("%c ", nome[cont]);
	}
	printf("\n");
	
	printf("Da segunda a ultima letra ");
	for(cont = 1; cont <= tamanho - 1; cont++){
		printf("%c ", nome[cont]);
	}
	
	printf("\n");
	
	printf("Posicao de cada letra no vetor \n");
	
	for(cont = 0; cont <= tamanho -1; cont++){
		printf("Posicao %d = %c \n", cont + 1, nome[cont]);
	}
	
	system("pause");
}


