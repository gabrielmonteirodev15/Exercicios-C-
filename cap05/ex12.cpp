#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando WHILE ou DO WHILE, 
um programa que peca números ao usuário ate que a soma de todos os números digitados for pelo menos 20.
*/
main(){
	int num, soma;
	
	printf("O programa ira parar quando a soma dos numeros for 20 \n");
	
	do{
		printf("Digite um numero \n");
		scanf("%d", &num);
		soma += num;
	}while(soma <= 20);
	
	printf("A soma dos numeros atingiu 20 \n");
	printf("Soma dos numeros foi de %d \n", soma);
}
