#include <stdio.h>

/*
Fa�a um programa em C que imprima  8 n�meros de uma sequ�ncia de Fibonacci onde os dois primeiros n�meros sejam fornecidos pelo o usu�rio
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
  
	//La�o for para gerar o resto da sequencia
    for (int cont = 1; cont <= 8; cont++) {
        proximo = a + b;
        printf("%d\n", proximo);
        a = b;
        b = proximo;
    }
}
