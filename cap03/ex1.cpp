#include<stdio.h>
#include<windows.h>

//Criar um programa em linguagem C que identifique se o numero é PAR ou IMPAR.
main(){
	system("cls");
	int num;
	
	printf("Programa para identificar se o numero e par ou impar \n");
	
	printf("Digite o numero: \n");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("Esse numero e par \n");
	}else{
		printf("Esse numero e impar \n");
	}
	system("pause");
}



