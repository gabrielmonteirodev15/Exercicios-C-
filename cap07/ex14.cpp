#include<stdio.h>
#include<windows.h>

/*
Preencha um vetor com 10 n�meros inteiros dados pelo usu�rio(vetor1). 
Em seguida, com base no vetor1, deve ser gerado um novo vetor de 10 n�meros inteiros, onde:
 - As 5 primeiras posi��es dever�o ser preenchidas pelos valores que est�o nas posi��es pares do vetor1; 
 - As 5 ultimas posi��es dever�o ser preenchidas pelos valores que est�o nas posi��es impares do vetor1;
*/
main(){
	int vetor1[10], vetor2[10], indice, indice1= 0, indice2 = 1;
	
	for(indice = 0; indice <= 9; indice++){
		printf("Digite um numero para a posicao %d do vetor \n", indice+1);
		scanf("%d", &vetor1[indice]);
	}
	
	for(indice = 0; indice <= 9; indice++){
		if(indice < 5){
			vetor2[indice] = vetor1[indice1];
			indice1 +=2;
		}
		else{
			vetor2[indice] = vetor1[indice2];
			indice2 +=2;
		}
	}	
	
	
	
	
	
	for(indice = 0; indice <=9 ; indice++){
		printf("[%d] ", vetor2[indice]);
	}
}
