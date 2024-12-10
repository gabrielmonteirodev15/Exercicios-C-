#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

/*
Crie um programa em C que gere uma senha aleatória de N números , onde N é fornecido pelo usuário. 
Utilize um laço for para gerar os numeros.
*/
main(){
	int numero, quantNumero;
	
	printf("Programa para gerar uma senha de numeros aleatoria \n");
	
	printf("Digite quantos numeros tera sua senha \n");
	scanf("%d", &quantNumero); //Entrada do tamanho da senha
	
	printf("Gerando senha ... \n");
	Sleep(200);//pausa de 2 segundos
	
	srand(time(NULL));
	printf("Senha gerada \n");
	//Laço for para gerar quantos numeros forem pedidos 
	for(int cont = 1; cont <= quantNumero; cont++){
		//Gera um numero aleatorio
		numero = rand() % 10;
		//Mostra esse numero na tela
		printf("%d", numero);
	}
}
