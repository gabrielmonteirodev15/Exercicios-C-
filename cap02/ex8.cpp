#include<stdio.h>
#include<math.h>
#include<windows.h>

//Criar um programa em linguagem C
//que receba uma medida em pés,
//faça as conversões e a seguir

//mostre os resultados.

//a) Polegadas;
//b) Jardas;
//c) Milhas.

main(){
	system("cls");
		
	float pes , pole , jardas , milhas;
	printf("Programa conversor de medidas \n");
	 
	printf("Digite a medida em pes \n");
	scanf("%f" , &pes);
	
	pole = pes * 12;
	jardas = pes / 3;
	milhas = pes / 5280;
	
	printf("Medidas convertidas \n Polegadas: %.2f \n Jardas : %.2f \n Milhas : %.5f \n" , pole, jardas, milhas);
	
	system("pause");
	
}


