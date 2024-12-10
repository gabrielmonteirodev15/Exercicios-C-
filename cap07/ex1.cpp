#include<stdio.h>
#include<windows.h>

/*
Preencher um vetor com 6 números fornecidos pelo usuário e mostrá-los na tela.
*/
main(){
	int numeros[6], indice;
	
	system("cls");
	
	for(indice = 0; indice <= 5; indice++){
		printf("Digite o numero %d do array \n", indice + 1);
		scanf("%d", &numeros[indice]);
		
	}
	
	for(indice = 0; indice <= 5; indice++){
		printf("numero %d = %d \n", indice + 1 , numeros[indice]);
	}
	system("pause");	
}

