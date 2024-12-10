#include <stdio.h>
#include <string.h>
#include<windows.h>

/*
Faça um programa para ajudar uma pizzaria a registrar seu cardapio. O programa deve ler 10 tipos de pizza e seus valores, e imprimir ao final o cardapio de acordo com os seguintes requisitos:
- Inverter a posição (o nome da pizza e o valor) da pizza mais cara com a pizza mais barata
digitada;
- Caso haja mais de uma pizza com o mesmo valor mais caro, considerar apenas uma delas para
o item acima;
- Caso haja mais de uma pizza com o mesmo valor mais barato, considerar apenas uma delas
para o primeiro item;
- Ao final, exibir todo o cardapio ja com as posições invertidas;

*/
main() {
    char pizzas[10][50], temp[50];
    float precos[10], tempPreco;
    int i, maisCara = 0, maisBarata = 0;

   
    printf("Digite os nomes e precos das 10 pizzas:\n");
    for (i = 0; i < 10; i++) {
		fflush(stdin);
        printf("Digite o nome da Pizza  \n");
		gets(pizzas[i]);
		printf("Agora digite o valor da pizza \n");
	    scanf("%f", &precos[i]);
    }

   
  
    for (i = 1; i < 10; i++) {
        if (precos[i] > precos[maisCara]) {
            maisCara = i;
        } else if (precos[i] < precos[maisBarata]) {
            maisBarata = i;
        }
    }

    strcpy(temp, pizzas[maisCara]);
    strcpy(pizzas[maisCara], pizzas[maisBarata]);
    strcpy(pizzas[maisBarata], temp);
    tempPreco = precos[maisCara];
    precos[maisCara] = precos[maisBarata];
    precos[maisBarata] = tempPreco;

   
    printf("\nCardápio final:\n");
    for (i = 0; i < 10; i++) {
        printf("%s - R$ %.2f\n", pizzas[i], precos[i]);
    }


}
