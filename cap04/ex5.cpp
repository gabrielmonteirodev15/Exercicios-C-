#include<stdio.h>
#include<windows.h>

//Criar um programa em linguagem C que imprima dois números com o inicio de 0 e 10 e finalize 10 e 0, 
//todos os dois ao mesmo tempo, com o intervalo de 0,5 segundos utilizando FOR DUPLO
main(){
	int cont;
	
	printf("Programa com FOR duplo \n");
	
	for(cont = 0; cont <= 10 ; cont++){
		printf("%d ", cont);
		Sleep(50);
	}
	printf("\n");
	for(cont = 10; cont >= 0; cont--){
		printf("%d ", cont);
		Sleep(50);
	}
}
