#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

//Criar um programa ( MEGA SENA ) em linguagem C que sorteie 6 números com os critérios que:
//- Os números não podem ser iguais entre eles
//- Nenhum dos números podem ser 0
//- Os números a serem sorteados são de 1 a 60

main(){
	system("cls");
	
	int num1 , num2 , num3 , num4 , num5, num6;
	
	printf("Programa mega sena \n");
	
	srand(time(NULL));
	num1 = rand()%60 + 1;
	num2 = rand()%60 + 1;
	num3 = rand()%60 + 1;
	num4 = rand()%60 + 1;
	num5 = rand()%60 + 1;
	num6 = rand()%60 + 1;
	
	if(num1 == num2 || num1 == num3 || num1 == num4 || num1 == num5 || num1 == num6){
		n1:
		num1 = rand()%60 + 1;
		if(num1 == num2 || num1 == num3 || num1 == num4 || num1 == num5 || num1 == num6){
			goto n1;
		}
	}else if(num2 == num1 || num2 == num3 || num2 == num4 || num2 == num5 || num2 == num6){
		n2:
		num2 = rand()%60 + 1;
		if(num2 == num1 || num2 == num3 || num2 == num4 || num2 == num5 || num2 == num6){
			goto n2;
		}
	}else if(num3 == num1 || num3 == num2 || num3 == num4 || num3 == num5 || num3 == num6){
		n3:
		num3 = rand()%60 + 1;
		if(num3 == num1 || num3 == num2 || num3 == num4 || num3 == num5 || num3 == num6){
			goto n3;
		}
	}else if(num4 == num1 || num4 == num2 || num4 == num3 || num4 == num5 || num4 == num6){
		n4:
		num4 = rand()%60 + 1;
		if(num4 == num1 || num4 == num2 || num4 == num3 || num4 == num5 || num4 == num6){
			goto n4;
		}
	}else if(num5 == num1 || num5 == num2 || num5 == num3 || num5 == num4 || num5 == num6){
		n5:
		num5 = rand()%60 + 1;
		if(num5 == num1 || num5 == num2 || num5 == num3 || num5 == num4 || num5 == num6){
			goto n5;
		}
	}else if(num6 == num1 || num6 == num2 || num6 == num3 || num6 == num4 || num6 == num5){
		n6:
		num6 = rand()%60 + 1;
		if(num6 == num1 || num6 == num2 || num6 == num3 || num6 == num4 || num6 == num5){
			goto n6;
		}
	}
	printf("%d / %d / %d / %d / %d / %d \n" , num1,num2,num3,num4,num5,num6);
	system("pause");
}	



