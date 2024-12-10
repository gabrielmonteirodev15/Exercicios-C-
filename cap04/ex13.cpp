#include<stdio.h>
#include<windows.h>

//Crie um programa em C, usando laco FOR, para gerenciar o quadro de medalhas de uma equipe de 10 atletas apos o término de uma competição. 
//O programa deve receber, de cada atleta, quantas medalhas de Ouro, Prata e Bronze eles conseguiram, 
//e ao final exibi o total de cada medalha(Ouro, prata, bronze) da equipe.

main(){
	int codigoMedalha, medOuro, medPrata, medBronze, cont, quantidade, contMedalhas;
	
	printf("Programa para informar os  ganhos das medalhas de 10 atletas \n");
	
	for(cont = 0; cont <= 10; cont++){
		quantidade = 0;	
		printf("Informe quantas medalhas o atleta ganhou \n");
		scanf("%d",  &quantidade);
		for(contMedalhas = 1; contMedalhas <= quantidade; contMedalhas++){
			codigoMedalha = 0;
			printf("Informe qual foi a medalha \n 1-Medalha de ouro \n 2-Medalha de prata \n 3-Medalha de bronze \n");
			scanf("%d", &codigoMedalha);
			
			if(codigoMedalha == 1){
				medOuro += 1;
				
			}
			else if(codigoMedalha == 2){
				medPrata += 1;
				
			}
			else if(codigoMedalha == 3){
				medBronze += 1;
			}
		}
		printf("Medalhas desse atleta foi registradas com sucesso \n");
		if(cont != 10){
			printf("Proximo atleta \n");
		}else if(cont == 10){
			printf("Todos atletas foram registrados \n");
		}
	}
	
	printf("O total de medalhas de ouro foi %d \n", medOuro);
	printf("O total de medalhas de prata foi %d \n", medPrata);
	printf("O total de medalha de bronze foi %d \n", medBronze);
}
