#include<stdio.h>
#include<math.h>
#include<windows.h> 


//Criar um programa em linguagem C que converta um numero decimal de 0 a 15 em numero binário.
main(){
	system("cls");
	
	int  num , x1 , x2 , x3 , x4;
	
	printf("Conversor de numera para binario \n");
	printf("Digite um numero entre 0 e 15 \n");
	
	scanf("%d" , &num);
	
	x1 = num % 2;
	x2 = (num / 2) % 2;
	x3 = ((num / 2) / 2) % 2;
	x4 = (((num / 2) / 2) / 2) % 2;
	
	printf("O numero em binario sera: \n");
	printf("%d %d %d %d " , x4 ,x3 ,x2 ,x1);
	system("pause");
}


