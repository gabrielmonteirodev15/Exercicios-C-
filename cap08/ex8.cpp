#include<stdio.h>
#include<windows.h>
#include<string.h>

/*
Crie um programa em C que leia 6 nomes, e depois mostre:
- Quantos dos nomes lidos começam com A e terminam com O;
- Quantos tem a letra 'O' e quantas letras 'O' foram encontradas ao total nos 6 nomes;
- Quantos dos nomes possuem a sílaba 'EL' ao final.

*/
main(){
	char nomes[6][20];
	int i, j , letrasO = 0, palavrasO = 0, silabaEL = 0, AO = 0, tam, indice;
	
	for(i = 0; i < 6; i++){
		fflush(stdin);
		printf("Digite um nome \n");
		gets(nomes[i]);
		
		indice = i;
		tam = strlen(nomes[i]);
		
		for(j = 0; j < tam; j++){
			if(nomes[i][j] == 'o' || nomes[i][j] == 'O'){
				letrasO += 1;
				palavrasO  += (indice == i) ? 1 : 0;
			}
		}
		
		if(nomes[i][0] == 'a' || nomes[i][0] == 'A'){
			if(nomes[i][tam - 1] == 'o' || nomes[i][tam - 1] == 'O'){
				AO += 1;
			}
		}
		
		if((nomes[i][tam - 2] == 'e') || (nomes[i][tam - 2] == 'E')) {
			if((nomes[i][tam - 1] == 'l') || (nomes[i][tam - 1] == 'L')) {
				silabaEL += 1;
			}
		}
	}
	
	printf("Existem %d letras O , encontradas em %d palavras \n", letrasO, palavrasO);
	printf("Existem %d nomes terminados em EL \n", silabaEL);
	printf("Existem %d nomes que comecam com a letra A e termina em O \n", AO);
}
