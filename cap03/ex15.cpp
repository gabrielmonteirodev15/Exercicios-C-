#include<stdio.h>
#include<windows.h>


//Crie um programa em linguagem C que leia quatro notas de um aluno, calcule sua media e 
//imprima a situação do aluno baseado na tabela abaixo:
main(){
	system("cls");
	
	float peso;
	
	printf("Programa para calculo de frete \n");
	
	printf("Digite o peso do produto \n");
	scanf("%f", &peso);
	
	if(peso <= 5){//Verifica se o peso é menor ou igual a 5kg
		printf("O preco de frete sera de R$10 \n");
	}else if(peso > 5 && peso <= 10){//Verifica se o peso é maior que 5 e menor que 10
		printf("O preco de frete sera de R$20 \n");
	}else if(peso > 10){//Verifica se o peso é maior que 10kg
			printf("O preco de frete sera de R$30 \n");
	}
	system("pause");
	
}
