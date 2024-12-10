#include<stdio.h>
#include<windows.h>


/*
Armazenar em Vetores, Nomes e Notas PR1 e PR2 de 6 alunos. Calcular a média de cada aluno e imprimir o nome do aluno e se ele foi Aprovado/Reprovado. 
Considerar aprovado se a média for maior que 6 e reprovado se média for menor ou igual a 6.
OBS.: 1 matriz para as notas tipo float, uma para os nomes, um vetor para a média e um para situação.

*/
main(){
	int colum, linha;
	float notas[6][1], media[6];
	char nomes[6][20],  final[6][10];
	
	for(colum = 0; colum < 6; colum++){
		fflush(stdin);
		printf("Digite o nome do aluno \n");
		gets(nomes[colum]);
		
		for(linha = 0; linha < 2; linha++){
			printf("Digite a nota desse aluno \n");
			scanf("%f", &notas[colum][linha]);
		}
		
		media[colum] = (notas[colum][linha -1] + notas[colum][linha]) / 2;
		
		if(media[colum] > 6){	
			strcpy(final[colum], "Aprovado");
		}
		else{
			strcpy(final[colum], "Reprovado");
		}
	}
	
	printf("Mostrando a situacao dos alunos \n");
	for(colum = 0; colum < 6; colum++){
		printf("Situacao do aluno %c : %c \nCom media %f \n", nomes[colum], final[colum], media[colum]);
	}
}
