#include<stdio.h>
#include<windows.h>

//Criar em programa em linguagem C, que recebe o primeiro termo de uma P.A., a razão, e o numero de termos, e efetue a SOMA DOS TERMOS da P.A.
main(){
	int numInicial, razao, numTermos, soma, cont;
	
	printf("Programa para a soma dos termos de uma P.A. \n");
	
	printf("Digite o numero inicial da P.A \n");
	scanf("%d", &numInicial);
	
	printf("Digite a razao da P.A \n");
	scanf("%d", &razao);
	
	printf("Digite o numero de termos da P.A \n");
	scanf("%d", &numTermos);
	
	printf("P.A \n");
	for(cont = 0; cont <= numTermos; cont++){
		printf("%d ", numInicial);
		
		numInicial = numInicial + razao;
		soma = soma + numInicial;
	}
	printf("\nA soma da P.A e de  %d", soma);
}
