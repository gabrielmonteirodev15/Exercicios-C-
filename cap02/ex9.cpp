#include<stdio.h>
#include<math.h>
#include<windows.h>

//Uma f�brica de brinquedos no Jap�o inventou uma nova forma de produzir bambol�s. cliente escolhe o 
//raio do bambol� e a f�brica produz o bambol� sob medida para o cliente. Crie um programa para ajudar o fabricante a

//calcular o per�metro do bambol� baseado na medida do raio escolhida pelo cliente.

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


