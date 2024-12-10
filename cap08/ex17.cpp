#include <stdio.h>

/*
Leia os elementos de uma matriz 3x3 e ordene os elementos de cada linha em ordem crescente.
*/
main() {
    int matriz[3][3], i, j, aux;

    // L� os elementos da matriz 3x3 digitados pelo usu�rio
    printf("Digite os elementos da matriz 3x3\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Digite o elemento para posicao %d %d: \n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Ordena cada linha da matriz usando o bubble sort
    for (i = 0; i < 3; i++) { // Percorre cada linha da matriz
        for (j = 0; j < 2; j++) { // Percorre os elementos da linha, exceto o �ltimo
            if (matriz[i][j] > matriz[i][j+1]) { // Se o elemento atual � maior que o pr�ximo
                // Troca os elementos de posi��o
                aux = matriz[i][j];
                matriz[i][j] = matriz[i][j+1];
                matriz[i][j+1] = aux;
            }
        }
    }

    // Imprime a matriz ordenada
    printf("Matriz ordenada por linhas:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
