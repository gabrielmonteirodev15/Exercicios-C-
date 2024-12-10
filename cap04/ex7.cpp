#include<stdio.h>
#include<windows.h>

//Criar um programa em linguagem C que imprima uma tabuada do 1 a 10 conforme entrada do usuário, 
//com o intervalo de 0,5 segundos utilizando o comando FOR.
main(){
	int num, cont, res;
	
	printf("Programa para fazer tabuada  \n");
	
	printf("Digite um numero para fazer a tabuada \n");
	scanf("%d", &num);
	
	for(cont = 1; cont <= 10; cont++){
		res = num * cont;
		printf("%d X %d = %d \n", num, cont , res);
		Sleep(50);
	}
}
