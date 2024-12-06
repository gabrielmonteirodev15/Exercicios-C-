#include<stdio.h>
#include<windows.h>

//Criar um programa em linguagem C que identifique se o numero é +, - ou NULO.
main(){
	system("cls");
	int num;
	
	printf("Programa para identificar se o numero e positivo , negativo ou  nulo \n");
	
	printf("Digite o numero \n");
	scanf("%d" , &num);
	
	if(num > 0){
		printf("Esse numero e positivo \n");
	}else if(num < 0){
		printf("Esse numero e negativo \n");
	}else if(num == 0 ){
		printf("Esse numero e nulo \n");
	}
	
	system("pause");
}



