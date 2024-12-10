#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando SWITCH, um programa que identifique se um numero e PAR ou IMPAR e 0 para sair.
*/

main(){
	int num, resto;
	
	printf("Programa par ou impar \n");
	
	printf("Digite um numero \n");
	scanf("%d", &num);
	
	resto = num % 2;
	if(num == 0){
		printf("Numero invalido \n");
	}
	else{
		switch(resto){
			case 0:
				printf("O numero %d e par \n", num);
			break;
			case 1:
				printf("O numero %d e impar \n", num);
			break;	
		}
	}

}
