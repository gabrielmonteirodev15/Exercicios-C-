#include<stdio.h>
#include<windows.h>

//Criar um programa em linguagem C que leia dois n�meros inteiros e som�-los. 
//Se a soma for maior que 10, mostrar o resultado. 
//Sen�o exibir a mensagem que n�o � poss�vel exibir o n�mero.
main(){
	system("cls");
	
	int num1, num2 , soma;
	
	printf("Programa com soma de numero inteiros \n");
	
	printf("Digite o primeiro numero : \n");
	scanf("%d" , &num1);
	
	printf("Digite o segundo numero : \n");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	if(soma > 10){
		printf("A soma entre esse dois numeros e : %d \n" , soma);
	}else{
		printf("Impossivel somar esse dois numeros \n");
	}
	
	system("pause");
}


