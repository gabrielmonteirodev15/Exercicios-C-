#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Crie um programa em C que leia 4 numeros de CPF(contendo as pontua��es) fornecidos pelo
usuario. Ap�s isso, validar:
- Se o CPF digitado est� dentro do padr�o xxx.xxx.xxx-xx, onde 'x' representam os numeros;
- O tamanho do CPF n�o pode ultrapassar o tamanho do padr�o;
- Validar se no lugar dos 'x' foram digitados numeros e se eles s�o positivos. Caso contrario
para qualquer uma das duas condi��es, o CPF tamb�m est� fora do padr�o;
- Ao final, exibir todos os CPFs digitados, e na frente de cada um a mensagem 'OK' caso esteja
dentro dos padroes, ou 'Formato invalido' caso haja alguma n�o conformidade;

*/
main() {
    char cpf[4][15]; 
    int i, j;

    printf("Digite 4 numeros de CPF (com pontua��o XXX.XXX.XXX-XX) \n");

    
    for (i = 0; i < 4; i++) {
    	printf("Digite um cpf \n");
       gets(cpf[i]);
    }

    
    for (i = 0; i < 4; i++) {
        int tam = strlen(cpf[i]);

        if (tam != 14) {
            printf("%s - Formato inv�lido (tamanho incorreto)\n", cpf[i]);
            continue;
        }

        for (j = 0; j < tam; j++) {
            if ((j == 3 || j == 7) && cpf[i][j] != '.') {
                printf("%s - Formato invalido (ponto na posicao incorreta)\n", cpf[i]);
                break;
            } else if (j == 11 && cpf[i][j] != '-') {
                printf("%s - Formato invalido (hifen na posicao incorreta)\n", cpf[i]);
                break;
            } 
        }

        if (j == tam) {
            printf("%s - OK\n", cpf[i]);
        }
    }

}
