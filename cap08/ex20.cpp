#include <stdio.h>
#include<windows.h>

/*
Leia os elementos de uma matriz 3x3 e conte quantos elementos positivos e negativos existem.

*/
main() {
    int matriz[3][3], i, j, positivos = 0, negativos = 0;

    // Lendo os elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Digite o elemento para posicao %d %d: \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Contando elementos positivos e negativos
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > 0) {
                positivos++;
            } else if (matriz[i][j] < 0) {
                negativos++;
            }
        }
    }

    // Imprimindo os resultados
    printf("Numero de elementos positivos: %d\n", positivos);
    printf("Numero de elementos negativos: %d\n", negativos);
}
