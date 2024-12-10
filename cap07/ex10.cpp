#include<stdio.h>
#include<windows.h>

/*
Crie um programa que leia a altura de 10 atletas de uma equipe de basquete, e armazene as leituras num vetor. 
Depois, mostre na tela o vetor lido, qual é o atleta mais alto, o mais baixo, a média da altura da equipe.
*/
main(){
	float alturas[10],  media = 0, maior = 0, menor = 3;
	int indice;
	
	printf("Calculando a media de altura entre os jogadores \n");
	
	for(indice = 0; indice <= 9; indice++){
		printf("Digite a altura do atleta %d \n", indice + 1);
		scanf("%f", &alturas[indice]);
		media = media + alturas[indice];
		
		if(maior < alturas[indice]){
			maior = alturas[indice];
		}
		if(alturas[indice] < menor){
			menor = alturas[indice];
		}
	}
	
	media = media / 10;
	
	printf("A media de altura entre os atletas e de %.2f \n", media);
	printf("A maior altura e de %.2f \n", maior);
	printf("A menor altura e de %.2f \n", menor);
}
