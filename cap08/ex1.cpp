#include<stdio.h>
#include<windows.h>

/*
Preencher um vetor com 3 nomes com 20 letras no máximo cada. Imprimir os Nomes.
*/
main(){
	char nomes[3][20];
	int indice;
	
	for(indice = 0; indice < 3; indice++){
		printf("Digite algum nome \n");
		gets(nomes[indice]);
	}
	
	for(indice = 0 ; indice < 3; indice++){
		printf("\n%s", nomes[indice]);
	}
}
