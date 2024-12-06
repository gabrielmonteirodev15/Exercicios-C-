#include<stdio.h>
#include<windows.h>

//Criar um programa em linguagem C que leia um numero positivo do teclado e informar se ele e divisível 
//por 10, por 5, por 2 ou se não e divisível por nenhum deles.
main(){
	system("cls");
	
	int num;
	
	printf("Programa com numero inteiro \n");
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &num);
	
	if(num > 0){
		if(num % 10 == 0){
			printf("Esse numero e divisivel por 10 \n");
		}
		if(num % 5 == 0){
			printf("Esse numero e divisivel por 5 \n");
		}
		if(num % 2 == 0 ){
			printf("Esse numero e divisivel  por 2 \n");
		}else{
			printf("Esse numero nao e divisivel por 10, 5 e 2 \n");
		}
	}else{
		printf("Numero invalido! \n");
	}
	system("pause");
}



