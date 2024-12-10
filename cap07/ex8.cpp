#include<stdio.h>
#include<windows.h>

/*
Preencha dois vetores de 5 posições com valores inteiros fornecidos pelo usuário. 
O programa deve mostrar os valores dos vetores, e depois somar e mostrar os números que pertençam a mesma posição, 
ou seja: vet1[0] + vet2[0], vet1[1]+ vet2[1],...
*/

main(){
	int vetor1[5], vetor2[5], indice, vetor3[5];
	printf("Programa para somar dois vetores \n");
	
	for(indice = 0 ; indice <= 4; indice++){
		printf("Digite o numero %d para o primeiro vetor \n", indice + 1);
		scanf("%d", &vetor1[indice]);
	}
	
	printf("Agora o segundo vetor \n");	
	
	for(indice = 0; indice <= 4; indice++){
		printf("Digite o numero %d para o segundo vetor \n",  indice + 1);
		scanf("%d", &vetor2[indice]);
	}
	
	printf("Mostando o primeiro vetor ... \n");
	for(indice = 0; indice <= 4; indice++){
		printf("%d ", vetor1[indice]);
	}
	
	printf("\nMostrando o segundo vetor ... \n");
	
	for(indice = 0; indice <= 4 ; indice++){
		printf("%d ", vetor2[indice]);
	}
	
	printf("\nAgora somando os dois vetores \n");
	
	for(indice = 0; indice <= 4; indice++){
		vetor3[indice] = vetor1[indice] + vetor2[indice];
		printf("P%d : %d + %d = %d \n", indice + 1, vetor1[indice], vetor2[indice], vetor3[indice]);
	}
}
