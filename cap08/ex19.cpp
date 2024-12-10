#include<stdio.h>
#include<windows.h>

/*
leia os elementos de uma matriz 3x3 e calcule a soma dos elementos de cada coluna 
da matriz e armazene os resultados em um vetor.
*/
main() {
    int matriz[3][3], somaColunas[3], i, j;

    // Lendo os elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Digite o elemento para posicao %d %d: \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializando o vetor de somas das colunas com zero
    for (i = 0; i < 3; i++) {
        somaColunas[i] = 0;
    }

    // Calculando a soma de cada coluna
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            somaColunas[j] += matriz[i][j];
        }
    }

    // Imprimindo as somas das colunas
    printf("As somas das colunas sao:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", somaColunas[i]);
    }
    printf("\n");
}
