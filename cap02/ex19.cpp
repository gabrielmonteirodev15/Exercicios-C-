#include<stdio.h>
#include<windows.h>

//Escreva um programa que fa�a a media ponderada de tr�s notas digitadas pelo usu�rio 
main(){
	system("cls"); //Inicio do programa
	
	float n1, n2 , n3, media; // Declara��o das variaveis
	
	printf("Programa para calculo de media ponderada de tres notas \n");
	
	printf("Digite a primeira nota: \n");
	scanf("%f" , &n1); //Leitura da primeira nota
	
	printf("Digite a segunda nota: \n");
	scanf("%f" , &n2); //Leitura da segunda nota
	
	printf("Digite a terceira nota: \n");
	scanf("%f" , &n3); //Leitura da primeira nota
	
	media = (n1 + n2 + n3) / 3;
	
	printf("A media ponderada e de : %.2f\n" , media);
	system("pause");
}



	
	
	
