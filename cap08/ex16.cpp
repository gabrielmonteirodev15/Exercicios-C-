#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Crie uma matriz 3x3 e um vetor de 3 posi��es. Inicialize a matriz com n�meros aleat�rios entre 
1 e 100 e o vetor com os valores da diagonal principal da matriz.
*/
main() {
    int matriz[3][3], vetor[3];
    int i, j;

    // para gerar n�meros aleat�rios
    srand(time(NULL));

    // Preenchendo a matriz com n�meros aleat�rios
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 100 + 1; // N�meros aleat�rios entre 1 e 100
        }
    }

    // Copiando a diagonal principal para o vetor
    for (i = 0; i < 3; i++) {
        vetor[i] = matriz[i][i];
    }

    // Imprimindo a matriz
    printf("Matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprimindo o vetor
    printf("Vetor (diagonal principal):\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

  
}
