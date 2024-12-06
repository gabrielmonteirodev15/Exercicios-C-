#include<stdio.h>
#include<windows.h>

main(){
	system("cls");
	
	int idade;
	
	printf("Programa para calculo da categoria do atleta \n");
	
	printf("Digite a idade do atleta \n");
	scanf("%d" , &idade );


	
	if(idade >= 5 && idade <= 7){
		printf("Esse atleta pertence a categoria Infantil A \n");
	}else if(idade >= 8  && idade <= 10){
		printf("Esse atleta pertence a categoria Infantil B \n");
	}else if(idade >= 11 && idade <= 13){
		printf("Esse atleta pertence a categoria Juvenil A \n");
	}else if(idade >= 14 && idade <= 17){
			printf("Esse atleta pertence a categoria Juvenil B \n");
	}else if(idade >= 18){
		printf("Esse atleta pertence a categoria Adulto \n");
	}
	system("pause");
}




