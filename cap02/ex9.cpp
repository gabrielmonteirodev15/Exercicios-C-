#include<stdio.h>
#include<math.h>
#include<windows.h>

//Uma fábrica de brinquedos no Japão inventou uma nova forma de produzir bambolês. cliente escolhe o 
//raio do bambolê e a fábrica produz o bambolê sob medida para o cliente. Crie um programa para ajudar o fabricante a

//calcular o perímetro do bambolê baseado na medida do raio escolhida pelo cliente.

main(){
	system("cls");
		
	float raio , peri;
	
	printf("Programa para calculo do perimetro do bambole \n");
	
	printf("Digite o raio desejado: \n");
	scanf("%f" , &raio);
	
	peri  = 2 * 3.14  * raio;
	
	
	printf("O perimetro do bambole sera  : %.2f \n " , peri);
	system("pause");
}


