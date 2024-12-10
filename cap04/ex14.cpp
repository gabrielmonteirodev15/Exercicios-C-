#include<stdio.h>

/*Uma empresa possui um total de saldo de R$ 200000,00 para pagar o salario de seus 15 funcionários. Crie um programa em C, usando FOR, para receber o salario
 desses funcionários, e verificar se o saldo da empresa é suficiente para pagar todos. 
 Exibir no final uma mensagem se o saldo foi ou não foi suficiente, e o saldo restante.
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
