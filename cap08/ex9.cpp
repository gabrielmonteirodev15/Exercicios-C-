#include<stdio.h>
#include<windows.h>
#include <string.h>

/*
Faça um programa em C usando matrizes que leia 5 palavras fornecidas pelo usuario, em
seguida varrer essas palavras e imprimir o resultado na tela seguindo os requisitos:
- Após a leitura das 5 palavras, percorrer cada uma delas e imprimir quantas vogais ela possui
ao total;
- Em todas as palavras que contiverem a letra 'a' ou 'A', substituir por pela letra 'X', e imprimir
na tela;

*/

main(){
	int i, j, vogais = 0, tamanho;
	char palavras[5][30];
	
	for(i = 0; i < 5; i++){
		fflush(stdin);
		printf("Digite uma palavras \n");
		gets(palavras[i]);
	}
	for(i = 0; i < 5; i++){
		tamanho = strlen(palavras[i]);
		for(j = 0; j < tamanho; i++){
			if(palavras[i][j] == 'a' || palavras[i][j] ==
'e' || palavras[i][j] == 'i' || palavras[i][j] == 'o' ||
palavras[i][j] == 'u'){
				vogais += 1;
				if(palavras[i][j] == 'a' ||palavras[i][j] == 'A') {
					palavras[i][j] = 'X';
				}
			}

		}
			printf("\nForam encontradas %d vogais nas palavras digitadas \n",
vogais);
		printf("Palavras depois  da substituicao das letras\n ");
		for(i = 0; i < 5; i++) {
		printf("%s\n", palavras[i]);
		}
		
	}
}
	

