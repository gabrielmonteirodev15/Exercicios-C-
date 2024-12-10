#include<stdio.h>
#include<windows.h>

/*
Faça um programa que leia um vetor de 12 números inteiros representando o faturamento de uma empresa nos últimos 12 meses. 
O programa deve calcular e exibir a média aritmética do faturamento, o maior e o menor valor faturado e em que mês ocorreram.
*/
main(){
	int faturamentos[12], indice, media = 0, maior = 0 , mesMaior = 0, menor = 10000, mesMenor = 0;
	
	printf("Calculando a media de faturamento anual empresa \n");
	for(indice = 0; indice <= 11; indice++){
		printf("Digite o faturamento do mes %d \n", indice+1);
		scanf("%d", &faturamentos[indice]);
		media = media + faturamentos[indice];
		
		if(maior < faturamentos[indice]){
			maior = faturamentos[indice];
			mesMaior = indice + 1;
		}
		
		if(menor > faturamentos[indice]){
			menor = faturamentos[indice];
			mesMenor = indice + 1;
		}
	}
	
	media = media / 12;
	
	printf("A media de faturamento dos ultimos 12 meses e de %d \n", media);
	printf("O maior faturamento dos ultimos 12 meses foi de %d no mes %d \n", maior, mesMaior);
	printf("O menor faturamento dos ultimos 12 foi de %d no mes %d \n", menor, mesMenor);
	
}

