#include<stdio.h>

/*Uma empresa possui um total de saldo de R$ 200000,00 para pagar o salario de seus 15 funcion�rios. Crie um programa em C, usando FOR, para receber o salario
 desses funcion�rios, e verificar se o saldo da empresa � suficiente para pagar todos. 
 Exibir no final uma mensagem se o saldo foi ou n�o foi suficiente, e o saldo restante.
*/
main(){
  int salarios, saldo, cont;

  printf("Programa para leitura dos salarios dos funcionarios\n");

  for(cont = 1;cont <= 15; cont++){
    printf("Informe o salario do funcionario %d: ", cont);
    scanf("%d", &salarios);

    saldo = saldo + salarios;
  }

  if(saldo <= 200000){
    printf("Saldo suficiente para pagar os salarios dos funcionarios \n Total dos salarios : %d", saldo);
  }
  else if(saldo > 200000){
    printf("Saldo insuficiente para pagar os salarios dos funcionarios \n Total dos salarios: %d,", saldo);
  }
}
