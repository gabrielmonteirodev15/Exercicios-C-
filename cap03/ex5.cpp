#include <stdio.h>
#include <math.h>
#include <windows.h>

//Criar um programa em linguagem C que resolva a fórmula de Bháskara e 
//determine se é possível obter raiz de um número negativo
int main() {
    system("cls");
    float a, b, c, delta, x1, x2;
    printf("Programa da formula de Bhaskara\n");
    printf("Digite a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        printf("Delta: %.2f\n", delta);
        printf("Nao e possível obter a raiz quadrada de um número negativo.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Delta: %.2f\n", delta);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
        printf("Resultado: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    system("pause");
}


