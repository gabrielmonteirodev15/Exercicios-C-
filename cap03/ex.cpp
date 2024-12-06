#include <stdio.h>

main() {
  float nota1, nota2, nota3, nota4, media;

  printf("Programa que calcula a média de 4 notas\n");

  printf("Digite a primeira nota: \n");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: \n");
  scanf("%f", &nota2);

  printf("Digite a terceira nota: \n");
  scanf("%f", &nota3);

  printf("Digite a quarta nota: \n");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3 + nota4) / 4;

  if (media >= 6) {
    printf("Aluno aprovado com media %.2f \n", media);
  } else if (media < 6 && media >= 3) {
    printf("Aluno de recuperacao com media %.2f \n", media);
  } else if (media < 3) {
    printf("Aluno reprovado com media %.2f \n", media);
  }
}


