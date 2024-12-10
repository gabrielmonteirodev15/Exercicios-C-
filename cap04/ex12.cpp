#include<stdio.h>
#include<windows.h>

//Crie um programa em Linguagem C, usando laco FOR, que receba a distancia percorrida e o consumo(Km/L) 
//de 5 veículos de um empresa. Ao final, mostre a distancia media percorrida pelos veículos e o consumo médio deles.

main(){
	float distancia, mediaDistancia, consumo, mediaConsumo, cont;
	
	printf("Programa para calculo de media de distancia e consumo da empresa \n");
	
	
	for(cont = 0; cont <= 5; cont++){
		printf("Digite a distancia percorrida \n");
		scanf("%f", &distancia);
		
		printf("Digite o consumo medio do veiculo / KM/L \n");
		scanf("%f", &consumo);
		
		mediaDistancia = mediaDistancia + distancia;
		mediaConsumo = mediaConsumo + consumo;
		
		printf("Dados resgistrados \nProximo carro \n");
	}
	mediaDistancia = mediaDistancia / 5;
	
	mediaConsumo = mediaConsumo /5;
	
	printf("A media da distancia percorridas pelos veiculos foi de %.1f\n", mediaDistancia);
	printf("A media de consumo dos veiculos foi de %.1f\n", mediaConsumo);
	
}
