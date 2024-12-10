#include <stdio.h>
#include<windows.h>

/*
Faça um programa que lê uma duas matrizes 3x3 de numeros inteiros e efetue a 
multiplicação dessas matrizes. Imprimir a matriz resultante.
*/
main() {
    int matriz1[3][3], matriz2[3][3], resultado[3][3];
    int i, j, k;

   
    printf("Digite os elementos da segunda matriz \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Digite o valor para posicao %d %d : \n", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

  
    printf("Digite os elementos da segunda matriz \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) { 
        	printf("Digite o valor para posicao %d %d : \n", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < 3; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    
    printf("A matriz resultante da multiplicação e \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
}
