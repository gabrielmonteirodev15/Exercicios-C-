#include<stdio.h>
#include<windows.h>

//Criar em programa em linguagem C, utilizando FUNÇÃO, que converta de BINÁRIO/DECIMAL e DECIMAL/BINÁRIO.

void binarioDecimal();
void decimalBinario();

main(){
	system("cls");
	int res;
	
	printf("Programa para conversao de numeros entre binario e numero \n");
	
	printf("Em qual base voce deseja converter | \n 1-Binario p/ decimal \n 2-decimal p/ binario \n");
	scanf("%d", &res);
	
	if(res == 1){
		binarioDecimal();
	}else if(res == 2){
		decimalBinario();
	}
	system("pause");
}

void binarioDecimal(){

	int num , x1, x2, x3 , x4;
	printf("Conversor de binario para decimal \n");
	printf("Digite os bits: \n");
	
	scanf("%d %d %d %d" , &x1, &x2, &x3 , &x4);
	
	num = (x1 * 8) + (x2 * 4) + (x3 * 2) + (x4 * 1);
	printf("O numero em decimal e : %d ", num);

}

void decimalBinario(){

	int  num , x1 , x2 , x3 , x4;
	
	printf("Conversor de numero para binario \n");
	printf("Digite um numero entre 0 e 15 \n");
	
	scanf("%d" , &num);
	
	x1 = num % 2;
	x2 = (num / 2) % 2;
	x3 = ((num / 2) / 2) % 2;
	x4 = (((num / 2) / 2) / 2) % 2;
	
	printf("O numero em binario sera: \n");
	printf("%d %d %d %d " , x4 ,x3 ,x2 ,x1);

}
