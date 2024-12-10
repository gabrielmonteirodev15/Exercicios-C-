#include<stdio.h>
#include<windows.h>

/*
faça o calculo de uma P.A., que o usuário forneça o primeiro termo, a razão da P.A. e o número de termos.
*/
main(){
	int inicio, razao , pa, cont = 1, numTermos;
	
	printf("Calculo de uma P.A \n");
	
	printf("Digite o numero para iniciar a P.A \n");
	scanf("%d", &inicio); //Entrada do primeiro termo da P.A
	
	printf("Digite a razao da P.A \n");
	scanf("%d", &razao); //Entrada da razão da P.A 
	
	printf("Digite o numero de termos da P.A \n");
	scanf("%d", &numTermos); //Entrada do numero de termos da P.A
	
	printf("\n%d ", inicio); //Imprime o primeiro termo da P.A 
	
	pa = inicio; //Inicia P.A com o primeiro numero 
	while(cont < numTermos){ //Laço vai repetir o numeros de vezes do termos da P.A 
		pa = pa +  razao; //P.A recebe a soma dela propria com a razao da P.A
		printf("%d ", pa); //Imprimem a P.A
		cont++;
	}
}
