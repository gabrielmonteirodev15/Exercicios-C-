#include<stdio.h>
#include<math.h>
#include<windows.h>

//Criar um programa em linguagem C que faça a conversão de m em
//km hm, dam, dc, cm e mm.

main(){
	system("cls");	
	
	float medida , km , hm , dam, dc, cm , mm;
	
	printf("Conversor de medidas \n");
	printf("Digite a medida em metros para conversao \n");
	
	scanf("%f", &medida);
	km = medida / 1000;

	
	hm = medida / 100;

	dam = medida / 10;

	dc = medida * 10;

	cm = medida * 100;

	mm = medida * 1000;

	printf("KM : %.2f ; HM : %.2f ; DAM : %.2f ; DC : %.2f ; CM : %.2f ; MM : %.2f \n " , km, hm, dam, dc, cm, mm);
	system("pause");
	
}
