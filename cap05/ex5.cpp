#include<stdio.h>
#include<windows.h>
#include<conio.h>

/*
Criar em linguagem C utilizando o comando WHILE, um programa que imprima uma 
palavra infinitamente, at� que uma tecla seja pressionada.
*/
main(){

	printf("Imprimindo Corinthians at� alguma tecla ser apertada \n");
	
	while(!kbhit()){
		printf("Corinthians !!! \n");
		Sleep(10);
	}
	system("pause");
}
