#include<stdio.h>
#include<windows.h>
#include<math.h>

//Crie um programa em C que leia a base e a altura de um triangulo, calcule sua
//área e o perímetro, e imprima o resultado para o usuário.


main(){
	system("cls");
	float alt , base , area , peri , hipo;
	
	printf("Programa para calculo da area e o  perimetro de um triangulo \n");
	
	printf("Digite a base do triangulo: \n");
	scanf("%f", &base);
	
	printf("Digite a altura do triangulo: \n");
	scanf("%f", &alt);
	
	area = (base * alt) / 2;
	hipo = (alt * alt) + (base * base);
	hipo = sqrt(hipo);
	peri = alt + base + hipo;
	
	printf("As medidas do triangulo sao : \n Area : %.2f \n Perimetro : %.2f \n" , area, peri);
	
	
	system("pause");
}


