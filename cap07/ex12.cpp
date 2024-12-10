#include<stdio.h>
#include<windows.h>

/*
Faça um programa em C que receba dois vetores  inteiros de tamanho 6 e verifique se eles são iguais, ou seja, 
se todos os elementos de um vetor são iguais aos elementos do outro vetor na mesma posição. Exibir a mensagem se são iguais ou não
*/
main(){
	int vetor1[6], vetor2[6], indice, iguais = 0;
	bool eIgual;
	
	printf("Comprarando dois vetores \n");
	
	printf("Preenchendo o primero vetor \n");
	for(indice = 0; indice <=5; indice++){
		printf("Digite o numero %d do primeiro vetor \n", indice+1);
		scanf("%d", &vetor1[indice]);
	}
	
	printf("Preenchendo o segundo vetor \n");
	for(indice = 0; indice <= 5; indice++){
		printf("Digite o numero %d do segundo vetor \n", indice+1);
		scanf("%d", &vetor2[indice]);
	}
	
	for(indice = 0; indice <= 5; indice++){
		if(vetor1[indice] == vetor2[indice]){
			iguais += 1;
		}
	}
	
	if(iguais == 6){
		eIgual = true;
	}
	
	if(eIgual){
		printf("Os dois vetores sao iguais \n");
	}
	else if(!eIgual){
		printf("Os dois vetores nao sao iguais \n");
	}
}


