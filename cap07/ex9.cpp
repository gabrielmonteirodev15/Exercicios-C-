#include<stdio.h>
#include<windows.h>

/*
Preencher um vetor com 8 n�meros inteiros fornecidos pelo usu�rio e gerar um novo a partir dele, 
onde se o numero digitado pelo usu�rio foi par, deve armazenar 0 naquela posi��o, se foi impar, 
deve armazenar o valor 1 na posi��o. No final, exibir o novo vetor gerado.

*/
main(){
	int vetor1[8], indice, vetor2[8];
	
	printf("Manipulando vetores \n");
	printf("Complete um vetor \n");
	
	for(indice = 0; indice <= 7; indice++){
		printf("Digite o numero %d no vetor \n", indice + 1);
		scanf("%d", &vetor1[indice]);
	}
	
	printf("Manipulando o vetor ... \n");
	
	for(indice = 0; indice <=7; indice++){
		if(vetor1[indice] % 2 == 0){
			vetor2[indice] = vetor1[indice];
		}
		else{
			vetor2[indice] = 1;
		}
	
	printf("%d ", vetor2[indice]);	
	}
	
}
