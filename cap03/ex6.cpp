#include<stdio.h>
#include<windows.h>

//Criar um programa em linguagem C que leia um número do usuário, 
//se for maior que 20 imprimir a metade desse número.
main(){
	system("cls");
	
	int num;
	
	printf("Digite um numero : \n");
	scanf("%d" , &num);
	
	if(num >= 20){
		num = num / 2;
		printf("Voltando valor : %d \n" , num);
	}else{
		printf("Voltadno valor : %d \n" , num);
	}
	system("pause");
}


