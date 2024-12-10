#include<stdio.h>
#include<windows.h>
#include<string.h>

/*
Crie um programa em C que leia 7 datas fornecidas pelo usuario. Apos isso, valide cada uma das datas com relacao a posicao das '/', para informar ao usuario se a data esta num padrao valido ou nao. Seguem alguns requisitos:
- As datas que o usuario pode fornecer devem ser no padrao xx/xx/xxxx;
- Não sera necessario, nesse exercicio, validar se há datas negativas, meses maiores que 12, etc..
Se ater somente à validação do padrão digitado pelo usuario;
- Ao final, exibir todas as datas, e na frente de cada um a mensagem 'OK' caso esteja dentro dos padrões, ou 'Formato invalido' caso haja alguma não conformidade;

*/
main(){
	int i, j, tamanho,  mensagem[7];
	char datas[7][11];
	
	printf("Digite a data no formato certo XX/XX/XXXX \n");
	for(i = 0; i <7; i++){
		printf("Forneca uma data \n");
		gets(datas[i]);
	
	} 

	for(i = 0; i < 7;i++){
		tamanho = strlen(datas[i]);
		
		for(j = 0; j < tamanho ; j++){
			if(tamanho == 10){
				if(datas[i][2] == '/' && datas[i][5] == '/'){
					mensagem[i] = 1;
				}
			}
			else{
				mensagem[i] =  0;
			}
		}
	}
	
	for(i = 0; i < 7; i++){
	 	if(mensagem[i] == 1){
	 			printf("Data %s esta no formato certo \n", datas[i]);
	 	}
	 	else{
	 			printf("Data %s esta no formato errado \n", datas[i]);
	 	}
	}
}
