#include<stdio.h>
#include<windows.h>

//Crie um programa em linguagem C, usando FOR. O programa deve receber um número inteiro, 
//que será a quantidade de idades que deverão ser lidas. 
//O programa deve também calcular a media das idades fornecidas e mostrá-la na tela.

main(){
	int idades, quantIdades, cont;
	float  mediaIdade;
	
	printf("Programa para calculo de media de idade \n");
	
	printf("Quantas idades seram lidas? \n");
	scanf("%d", &quantIdades);
	
	for(cont = 1; cont <= quantIdades; cont++){
		printf("Informe a idade: \n");
		scanf("%d", &idades);
		
		mediaIdade = mediaIdade + idades;
	}
	mediaIdade = mediaIdade / quantIdades;
	printf("A media de idades fornecidas e de %.1f", mediaIdade);
}
