#include <stdio.h>

//Criar um programa em C para calcular o �ndice de Massa Corporal (IMC) de uma pessoa, e exibir a sua classifica��o baseado nos crit�rios
main() {
    float peso;

  	printf("Programa para calculo de frete \n");

  	printf("Digite o peso do produto : \n");
  	scanf("%f", &peso); //Entrada do peso

	if(peso <= 5){ //Verifica se o peso � menor ou igual a 5
      printf("O preco do frete sera de  R$10 \n");
    }
    else if(peso > 5 && peso <= 10){ //Verifica se o peso � maior que 5 e menor ou igual a 10
      printf("O preco do frete sera de  R$20 \n");
  	}
  	else if(peso > 10){ //Verifica se o peso � maior que 10
    	printf("O preco do frete sera de  R$30 \n");
  	}
}  



