#include<stdio.h>
#include<windows.h>

/*
Crie um programa em C que receba n�meros inteiros fornecidos pelo usu�rio usando WHILE. 
Se o n�mero digitado for divis�vel por 2 e por 5, o programa deve fazer uma contagem regressiva, 
do numero digitado at� 0, e em seguida sair do la�o.
*/
main(){
	int num = 1;
	
	printf("O programa ira rodar ate voce digitar um numero divisivel por 2 e 5 \n");
	
	while(num != -1){
		printf("Digite um numero \n");
		scanf("%d", &num);
		
		if(num % 2 == 0 && num % 5 == 0){
			printf("Numero %d e divisivel por 2 e por 5 \n contagem regressiva \n" , num);
			while(num > -1){
				printf("%d \n", num );
				Sleep(100);
				num--;
			}
			
		}else{
			printf("Numero %d nao e divisivel por 2 e por 5 \n ");
		}
	
	}
	printf("Fim do programa \n");
}
