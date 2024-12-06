#include<stdio.h>
#include<windows.h>
#include<math.h>

//Um fabricante de ferraduras africano acaba de expandir os negócios. Agora ele fabrica ferraduras para qualquer tipo de animal com casco. 
//O formato das ferraduras é o de meia tora. O cliente escolhe o raio externo e o raio interno e ele produz a ferradura. 
//Crie um programa para ajudar o ferreiro a calcular a área da ferradura baseado na medida do raio
//externo e interno fornecido pelo cliente.


main(){
	system("cls");
	float raioE, raioI, areaE , areaI, areaTotal;
	
	printf("Programa para calcular area de uma ferradura \n");
	
	printf("Digite o raio EXTERNO : \n");
	scanf("%f" ,&raioE);
	
	printf("Digite o raio INTERNO : \n");
	scanf("%f" , &raioI);
		
	areaE =  (90 / 360) * (3.14 * raioE );
	areaI = (90 / 360) * (3.14 * raioI);
	
	areaTotal = areaE - areaI;
	
	printf("As medidas da ferradura sao : \n Area Externa : %.2f \n Area Interna : %.2f \n Area Total : %.2f \n" , areaE, areaI , areaTotal);
	system("pause");
}
