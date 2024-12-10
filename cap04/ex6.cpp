#include<stdio.h>
#include<windows.h>

//Criar um programa em linguagem C que imprima a tabela ASCII utilizando o comando FOR.
main(){
	int cont;
	printf("Imprimindo a tabela ASCII \n");
	
	for(cont = 0; cont <= 255; cont ++){
		printf("%i = %c \n", cont , cont);
	}
}
