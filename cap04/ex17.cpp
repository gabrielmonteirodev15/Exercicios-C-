#include<stdio.h>

/*Fa�a um programa que leia um n�mero inteiro N e exiba todos os 
n�meros pares e �mpares de 1 at� N utilizando um la�o for.*/
main(){
	int numero;
	
	printf("Programa para mostrar numeros pares e impares dentro de um limite \n");
	
	printf("Digite o numero limite \n");
	scanf("%d", &numero); //Entrada do numero limite 
	
	printf("Numeros par dentro do limite \n");
	//la�o for para mostrar apenas os numeros par dentro do limite 
	for(int cont = 0; cont <= numero; cont++){
		//Verifica se o numero do contador � par
		if(cont % 2 == 0){ //Se for par mostrara o numero na tela
			printf("%d ", cont);
		}
	}
	
	printf("\nNumeros impar dentro do limite \n");
	//La�o for para mostrar apenas os numero impar dentro do limite
	for(int cont = 0; cont <= numero; cont++){
		//Verifica se o numero do contador � impar
		if(cont % 2 == 1){ //Se for mostrara o numero na tela
			printf("%d ", cont);
		}
	}
}
