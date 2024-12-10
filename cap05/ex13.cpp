#include<stdio.h>
#include<windows.h>

/*
Crie um programa em C, usando SWITCH, que receba a idade de um atleta, 
e baseado na tabela abaixo retorne uma mensagem com a categoria a qual ele pertence para competir:
*/
main(){
	int idade;
	
	printf("Calculando a categoria do atleta \n");
	
	printf("Digite a idade do atleta \n");
	scanf("%d", &idade);
	
	switch(idade){
		case 5: case 6 : case 7:{
			printf("Atleta pertence  a categoria infantil A \n");
			break;
		}
		case 8: case 9: case 10:{
			printf("Atleta pertence  a categoria infantil B \n");
			break;
		}
		case 11: case 12: case 13:{
			printf("Atleta pertence  a categoria Juvenil A \n");
			break;
		}
		case 14: case 15: case 16: case 17:{
				printf("Atleta pertence  a categoria Juvenil B \n");
			break;
		}
		default:{
			printf("Atleta pertence  a categoria adulto \n");
			break;
		}	
	}
}
