#include<stdio.h>
#include<windows.h>

/*
Imprima a tabuada de um n�mero digitado pelo usu�rio.
*/
main(){
	int num, cont = 1, tabuada;
	
	printf("Calculo de tabuada \n");
	
	printf("Digite um numero para fazer a tabuada \n");
	scanf("%d", &num); //Entrada do numero da tabuada 
	
	do{ //La�o do while
		tabuada = num * cont; //Tabuada recebe o numero vezes o contador que vai de 1 a 10
		printf("%d X %d = %d \n", num, cont, tabuada); //Imprimi a tabuada 
		cont++;
	}while(cont <= 10); //Repete o la�o at� o contador chegar em 10
}
