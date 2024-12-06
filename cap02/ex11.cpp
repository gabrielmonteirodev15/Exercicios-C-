#include<stdio.h>
#include<math.h>
#include<windows.h>


//Criar um programa em linguagem C programa que receba o tempo em horas, a velocidade média, e o consumo médio do veículo. 
//À partir da velocidade e do tempo calcule a distancia percorrida, e mostre o consumo aproximado do veículo

main(){
	system("cls");
	float tempo, veloMedia, consMedio, dist, cons;
	
	printf("Programa para calcular o consumo do carro \n");
	
	printf("Digite o tempo da viagem em horas: \n");
	scanf("%f", &tempo);
	
	printf("Digite a velocidade media: \n");
	scanf("%f" , &veloMedia);
	
	printf("Digite a consumo medio do veiculo: \n");
	scanf("%f", &consMedio);
	
	dist = veloMedia * tempo;
	
	cons = dist / consMedio;
	
	printf("O carro gastou cerca de %.2f L/KM" , cons);
	system("pause");
}


