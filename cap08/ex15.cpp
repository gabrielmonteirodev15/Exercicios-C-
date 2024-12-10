#include <stdio.h>
#include<windows.h>

 
/*
Faça um programa que leia uma matriz 4 x 4 de numeros inteiros. Em seguida, baseado nessa
matriz lida, gere e imprima uma nova matriz 4 x 4 seguindo as seguintes regras:
- Os elementos da primeira linha devem ser colocados na ultima linha, e os da ultima linha
devem ser colocados na primeira;
- Os elementos da linha 2 e da linha 3 da matriz devem ser colocados na ordem inversa que
foram lidos;

*/
main() {
    int matriz[4][4];
    int i, j, aux;

  
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
        	printf("Digite o elemento na posicao %d %d : \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < 4; j++) {
        aux = matriz[0][j];
        matriz[0][j] = matriz[3][j];
        matriz[3][j] = aux;
    }

   
    for (i = 1; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            aux = matriz[i][j];
            matriz[i][j] = matriz[i][3 - j - 1];
            matriz[i][3 - j - 1] = aux;
        }
    }

    
    printf("\nMatriz modificada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

   
}
