#include <stdio.h>

/*
Faça um programa em C que imprima  8 números de uma sequência de Fibonacci onde os dois primeiros números sejam fornecidos pelo o usuário
*/
int main() {
    int a , b , proximo;

	printf("Sequencia de Fibonacci \n");
	
	printf("Digite o primeiro numero da sequencia \n");
	scanf("%d", &a); //Entrada do primeiro numero da sequencia
	
	printf("Digite o segundo numero da sequencia \n");
	scanf("%d", &b); //Entrada do segundo numero da sequencia
	
	//Mostra na tela os dois primeiros numeros da sequencia
    printf("%d \n%d\n", a, b);
  
	//Laço for para gerar o resto da sequencia
    for (int cont = 1; cont <= 8; cont++) {
        proximo = a + b;
        printf("%d\n", proximo);
        a = b;
        b = proximo;
    }
}
