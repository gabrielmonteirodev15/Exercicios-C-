#include<stdio.h>
#include<windows.h>

/*
Preencher um vetor com os números pares do número 2 a 20
*/
main(){
	int numeros[10], indice = 0, cont;
	printf("Numeros pares entre 2 e 20 \n");
	for(cont= 2; cont <= 20; cont++){
		if(cont % 2 == 0){
			numeros[indice] = cont;
			indice += 1;
		}
	}
	
	for(indice = 0; indice <= 9 ;indice++){
		printf("%d \n", numeros[indice]);
	}
}
