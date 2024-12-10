#include<stdio.h>
#include<windows.h>

//Criar em programa (CALCULADORA) em linguagem C, utilizando FUNÇÃO, em que calcule as quatro operações básicas. ( + , - , / e * ) .
void soma();
void subtracao();
void mult();
void divisao();

main(){
	int operacao, res;
	
	printf("Calculadora usando funcao \n");
	
	start:
	printf("Qual operacao voce deseja realizar \n --(1-Adicao) \n --(2-Subtracao) \n --(3-Multiplicacao) \n --(4-Divisao) \n");
	
	scanf("%d", &operacao);
	
	if(operacao == 1){
		soma();
	}
	else if(operacao == 2){
		subtracao();
	}
	else if(operacao == 3){
		mult();
	}
	else if(operacao == 4){
		divisao();
	}
	else{
		printf("Operacao invalida \n");
		goto start;
	}
	
	printf("\nDeseja fazer outra conta? (1-sim/2-nao)\n");
	scanf("%d", &res);
	if(res == 1){
		goto start;
	}else if(res == 2){
		
	}
	
	printf("\nFim do programa ");
}

//Função Soma
void soma(){
	float num1, num2 , soma;
	
	printf("---Adicao--- \n");
	printf("Digite um numero : \n");
	scanf("%f", &num1);
	
	printf("Digite outro numero : \n");
	scanf("%f", &num2);
	
	soma = num1 + num2;
	
	printf("%.2f + %.2f = %.2f", num1, num2, soma);
}

//Função subtração
void subtracao(){
	float num1, num2, sub;
	
	printf("---Subtracao--- \n");
	printf("Digite um numero : \n");
	scanf("%f", &num1);
	
	printf("Digite outro numero : \n");
	scanf("%f", &num2);
	
	sub = num1 - num2;
	
	printf("%.2f - %.2f = %.2f", num1 , num2 , sub);
}

//Função multiplicação
void mult(){
	float num1, num2, mult;
	
	printf("---Multiplicacao--- \n");
	printf("Digite um numero : \n");
	scanf("%f", &num1);
	
	printf("Digite outro numero : \n");
	scanf("%f", &num2);
	
	mult = num1 * num2;
	
	printf("%.2f X %.2f = %.2f", num1 , num2 , mult);
}

//Função Divisão
void divisao(){
	float num1, num2, divi;
	
	printf("---Divisao--- \n");
	printf("Digite um numero : \n");
	scanf("%f", &num1);
	
	printf("Digite outro numero \n");
	scanf("%f", &num2);
	
	divi = num1 / num2;
	
	printf("%.2f / %.2f = %.2f", num1, num2 , divi);
}

