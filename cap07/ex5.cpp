#include<stdio.h>
#include<windows.h>

/*
Preencher um vetor com os números pares do número 2 a 20. Preencher um vetor com os números de 10 a 19. Somar os vetores acima.
*/
main(){
	int vetor1[10], vetor2[10], indice = 0, cont;
	
	system("cls");
	printf("Soma de vetores \n");
	printf("O primeiro vetor contem os numeros pares de 2 a 20 \n");
	printf("O segundo vetor contem os numeros de 10 a 19 \n");

	for(cont = 0; cont <= 9; cont++){
		vetor1[cont] = indice + 2;
		indice += 2;
	}
	
	for(cont = 0; cont <= 9; cont++){
		vetor2[cont] = cont + 10;
	}
	
	
	for(indice = 0; indice <= 9; indice++){
		printf("[%d] ", vetor1[indice] + vetor2[indice]);
	}
	system("pause");
}
