#include<stdio.h>
#include<windows.h>

/*
Leia os elementos de uma matriz 3x3 e encontre o maior elemento  e sua posição.
*/
main() {
    int matriz[3][3], i, j, maior, linhaMaior, colunaMaior;

    // Lê os elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Digite o elemento para posicao %d %d: \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa o maior elemento e sua posição
    maior = matriz[0][0];
    linhaMaior = 0;
    colunaMaior = 0;

    // Busca pelo maior elemento
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i + 1;
                colunaMaior = j + 1;
            }
        }
    }

    // Imprime o resultado
    printf("O maior elemento e %d e esta na posicao (%d, %d)\n", maior, linhaMaior, colunaMaior);

}
