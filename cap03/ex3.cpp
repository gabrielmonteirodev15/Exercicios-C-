#include<stdio.h>
#include<windows.h>
#include<math.h>

//Criar um programa(CALCULADORA ) em linguagem C que calcule as quatro
//operações básicas (+ ,- , / e *) .

main(){
	system("cls");
	
	int num1 , num2 , op, res, cont;
	
	printf("Calculadora \n ");
	
	start:
	printf("Qual operacao sera feita ? \n");
	printf("...1 - Adicao \n");
	printf("...2 -Subtracao \n");
	printf("...3 - Multiplicacao \n");
	printf("...4 - Divisao \n ");
	
	scanf("%d" , &op);

	middle:	
	if(op == 1){
		printf("Digite o primeiro numero: \n");
		scanf("%d", &num1);
		printf("Digite o segundo numero: \n");
		scanf("%d", &num2);
		
		res = num1 + num2;
		
	}else if(op == 2){
		printf("Digite o primeiro numero : \n");
		scanf("%d", &num1);
		printf("Digite o segundo numero \n");
		scanf("%d", &num2);
		
		res = num1 - num2;
	}else if(op == 3){
		printf("Digite o primeiro numero : \n");
		scanf("%d", &num1);
		printf("Digite o segundo numero \n");
		scanf("%d", &num2);
		
		res = num1 * num2;
	}else if(op == 4){
		printf("Digite o primeiro numero : \n");
		scanf("%d", &num1);
		printf("Digite o segundo numero \n");
		scanf("%d", &num2);
		
		res = num1 / num2;
	}else{
		printf("Digite uma operacao valida \n");
	}
	
	
	printf("O resultado e : %d \n" , res);
	
	printf("Deseja continuar nessa operacao \n 1 - Sim \n 2 - Nao ");
	scanf("%d" , &cont);
	
	if(cont == 1){
		goto middle;
	}else if(cont == 2){
		goto start;
	}else{
		printf("Numero invalido");
	}
	system("pause");
}
