#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando WHILE e / ou DO WHILE aninhado, um programa conforme imagem abaixo
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
*/
main(){
	int cont = 1, linhas = 1;
	
	printf("Desenhando uma escada em C \n");
	
	while(linhas <= 8){
		cont = 1;
		while(cont <= linhas){
			printf("* ");
			cont++;	
		}
		
		printf("\n");	
		linhas++;
	}
}
