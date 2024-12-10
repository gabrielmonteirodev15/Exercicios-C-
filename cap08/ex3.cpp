#include<stdio.h>
#include<windows.h>
#include<string.h>

/*
Preencher um vetor com 3 nomes e mostrar quantas letras A e E tem, ao total, nos 3 nomes.
*/
main(){
	char nomes[3][20];
	int indice, indice1, letrasA = 0, letrasE = 0, tamanho;
	
	for(indice = 0; indice < 3; indice++){
		printf("Digite um nome \n");
		gets(nomes[indice]);
		
		tamanho = strlen(nomes[indice]);
		
		for(indice1 = 0 ; indice1 < tamanho; indice1++){
			if(nomes[indice][indice1] == 'a' || nomes[indice][indice1] == 'A'){
				letrasA += 1;
			}
			if(nomes[indice][indice1] == 'e' || nomes[indice][indice1] == 'E'){
				letrasE += 1;
			}
		}
	}
		
	printf("Nesses nomes existem %d letras 'A' e %d letras 'E' \n", letrasA, letrasE);
}
