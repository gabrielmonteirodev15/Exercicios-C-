#include<stdio.h>
#include<windows.h>

/*
Criar em linguagem C e utilizando o comando WHILE e / ou DO WHILE aninhado, um programa conforme imagem abaixo:
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16
*/
main(){
	int linhas = 1, cont = 1, num = 1, fator = 1;
	
	while(linhas <= 4){
		cont = 1;
		num = fator;
		while(cont <= 4){
			printf("%d ", num);
			num = num + fator;
			cont++;
		}
		
		printf("\n");
		linhas++;
		fator += 1;
	} 
}
