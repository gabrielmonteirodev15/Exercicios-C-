#include<unistd.h>
#include<stdio.h>

//Criar um programa em linguagem C que imprima o alfabeto de A a
//Z com o intervalo de 0,5 segundos.


main(){
  char letra;
  printf("Programa que exibe de A a Z \n");

  for(letra = 'A'; letra <= 'Z'; letra++){
    printf("%c ", letra);
    sleep(1);
  }
  
}
