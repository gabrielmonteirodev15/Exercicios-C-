#include<stdio.h>
#include<windows.h>

//Criar três programas em linguagem C que identifique e que ordene 4 números em ordem decrescente.
main(){
	system("cls");
	int num1 , num2, num3, num4;
	
	printf("Programa para ordenar os numeros em ordem decrescente \n");
	
	printf("Digite quatro numeros: \n");
	scanf("%d%d%d%d",&num1 , &num2, &num3);

		
	
	if(num1 > num2 && num1 > num3 && ){ //num1 maior
		if(num2 > num3){ // num2 maior que os demais
			
			if(num3 > num4){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num4, num3, num2, num1 );
			}else{
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num3, num4, num2, num1 );
			}	
			
		}else if(num3 > num2 && num3 > num4){ // num3 maior que os demais
			
			if(num2 > num4){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num4, num2, num3, num1 );
			}else{
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num2, num4, num3, num1 );
			}
			
		}else if(num4 > num3 && num4 > num2){//num4 maior que os demais
			if(num2 > num3){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num3, num2, num4, num1 );
			}else {
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num2, num3, num4, num1 );
			}			
		}
	}
	else if(num2 > num1 && num2 > num3 && num2 > num4){ //num2 maior
		if(num1 > num3 && num1 > num4){//num1 maior que os demais
			
			if(num3 > num4){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num4, num3, num1, num2 );
			}else{
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num3, num4, num1, num2 );
			}
		}else if(num3 > num1 && num3 > num4){//num3 maior que os demais
			
			if(num1 > num4){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num4, num1, num3, num2 );
			}else{
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num1, num4, num3, num2 );
			}
		}else if(num4 > num1 && num4 > num3){ //num4 maior que os demais
			
			if(num1 > num3){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num3, num1, num4, num2 );
			}else{
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num1, num3, num4, num2 );
			}
		}	
	}
	else if(num3 > num1 && num3 > num2 && num3 > num4){ //num3 maior
		if(num1 > num2 && num1 > num4){ // num1 maior que os demais
			
			if(num2 > num4){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num4, num2, num1, num3 );
			}else{
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num2, num4, num1, num3 );
			}
		}else if(num2 > num1 && num2 > num4){ //num2 maior que os demais
			
			if(num1 > num4){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num4, num1, num2, num3 );
			}else{
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num1, num4, num2, num3 );
			}
		}else if(num4 > num1 && num4 > num2){ //num4 maior que os demais
			
			if(num1 > num2){
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num2, num1, num4, num3 );
			}else{
				printf("Em ordem decrescente \n %d ; %d ; %d ; %d \n", num1, num2, num4, num3 );
			}
		}
	}
	
	
	system("pause");
}



