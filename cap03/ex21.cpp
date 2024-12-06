#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Criar o jogo de cartas 21
//Creiterios
//1) Os números não podem ser iguais entre eles.
//2) Os números a serem sorteados são de 01 a 10.
//3) Nenhum dos números podem ser 0.
//4) Responder: Quem ganhou ?
//5) Por que ganhou ?
main(){
  system("cls");
  int vcnum1, vcnum2, vcnum3, vcnum4, vcnum5, pcnum1, pcnum2 , pcnum3, pcnum4, pcnum5, vctotal, pctotal, res;

	start:
  printf("Programa 21 \n");

  //Gerando os primeiros numeros
  srand(time(NULL));
  vcnum1 = rand() % 10 + 1;
  vcnum2 = rand() % 10 + 1;
  vcnum3 = 0;
  vcnum4 = 0;
  vcnum5 = 0;
  
  pcnum1 = rand() % 10 + 1;
  pcnum2 = rand() % 10 + 1;
  pcnum3 = 0;
  pcnum4 = 0;
  pcnum5 = 0;

  //Verififca se os numeros do VC são iguais , se sim gera outros dois 
  if(vcnum1 == vcnum2){
    randowVC:
   
    vcnum1 = rand() % 10 + 1;
    vcnum2 = rand() % 10 + 1;
    if(vcnum1 == vcnum2){
      goto randowVC;
    }
  }

  //Verifica se os numeros do PC são iguais , se sim gera outros dois
  if(pcnum1 == pcnum2){
    randowPC:
    
    pcnum1 = rand() % 10 + 1;
    pcnum2 = rand() % 10 + 1;
    if(pcnum1 == pcnum2){
      goto randowPC;
    }
  }
  
  //Calcula o total dos dois jogadores
  vctotal = vcnum1 + vcnum2;
  pctotal = pcnum1 + pcnum2;
  printf("VC: %d + %d = %d \n", vcnum1, vcnum2, vctotal);
  printf("PC: X + X  = X \n");

  printf("Deseja continuar? (1-Sim / 2-Nao)\n");
  scanf("%d", &res);

  
  //Caso o jogador queira continuar vai gerar um terceiro numero
  //Round 1
  if(res == 1){
     
      vcnum3 = rand() % 10 + 1;
      pcnum3 = rand() % 10 + 1;
      vctotal = vctotal + vcnum3;
      pctotal = pctotal + pcnum3;
    if(vctotal >= 21 || pctotal >= 21){
      goto Final;
    }
      printf("VC: %d + %d + %d = %d \n", vcnum1, vcnum2,vcnum3, vctotal);
      printf("PC: X + X  + X = X \n");
   
    
    
    //Vai perguntar se o jogador quer continuar
    printf("Deseja continuar? (1-Sim / 2-Nao)\n");
    scanf("%d", &res);
    //Caso o jogador queira continua vai gerar um quarto numero
    //Round 2
    if(res == 1){
      
      vcnum4 = rand() % 10 + 1;
      pcnum4 = rand() % 10 + 1;
      vctotal = vctotal + vcnum4;
      pctotal = pctotal + pcnum4;
    if(vctotal >= 21 || pctotal >= 21){
      goto Final;
    }
      printf("VC: %d + %d + %d + %d = %d \n", vcnum1, vcnum2,vcnum3, vcnum4, vctotal);
      printf("PC: X + X  + X + X = X \n");
      
      //Vai perguntar se o jogador quer continuar
      printf("Deseja continuar? (1-Sim / 2-Nao)\n");
      scanf("%d", &res);
      //Caso o jogador queira continua vai gerar um quinto numero
      //Round 3
      if(res == 1){
       
        vcnum5 = rand() % 10 + 1;
        pcnum5 = rand() % 10 +1;
        vctotal = vctotal + vcnum5;
        pctotal = pctotal + pcnum5;
        if(vctotal >= 21 || pctotal >= 21){
      		goto Final;
    	}

        printf("VC: %d + %d + %d + %d + %d = %d \n", vcnum1, vcnum2,vcnum3, vcnum4, vcnum5, vctotal);
        printf("PC: %d + %d  + %d + %d + %d = %d \n", pcnum1, pcnum2,pcnum3, pcnum4, pcnum5,  pctotal);

      }
        //Caso o jogador não queira continua vai mostrar o resultado final
      else if(res == 2){
        goto Final;
      }
    }
  
    else if(res == 2){
      goto Final;
    }
    
  }
  
  else if(res == 2){
    goto Final;
  }

  Final:
	printf("\n---------Fim do Jogo----------- \n");
  	printf("\n------Resultado------- \n");
 
  if(vcnum3 == 0 ){
    printf("VC: %d + %d = %d \n", vcnum1, vcnum2, vctotal);
    printf("PC: %d + %d  = %d \n", pcnum1, pcnum2, pctotal);
  }
  else if(vcnum4 ==0){
    printf("VC: %d + %d + %d = %d \n", vcnum1, vcnum2, vcnum3, vctotal);
    printf("PC: %d + %d + %d = %d \n", pcnum1, pcnum2, pcnum3, pctotal);
  }
  else if(vcnum5 == 0){
    printf("VC: %d + %d + %d + %d = %d \n", vcnum1, vcnum2, vcnum3, vcnum4, vctotal);
    printf("PC: %d + %d + %d + %d = %d \n", pcnum1, pcnum2, pcnum3, pcnum4,  pctotal);
  }
  else if(vcnum5 != 0){
    printf("VC: %d + %d + %d + %d + %d = %d \n", vcnum1, vcnum2, vcnum3, vcnum4,vcnum5, vctotal);
    printf("PC: %d + %d + %d + %d + %d = %d \n", pcnum1, pcnum2, pcnum3, pcnum4, pcnum5,  pctotal);
  }
  //Verifica se nenhum dos dois passsaram de 21
  if(vctotal <= 21 && pctotal <= 21){
    //Vai verifica qual dos dois foi maior ou se houve empate
    if(vctotal > pctotal){
      printf("Parabens voce ganhou \nVC e maior que PC \n");
    }
    else if(pctotal > vctotal){
      printf("Voce perdeu \nPC e maior que VC \n");
    }
    else if(vctotal == pctotal){
      printf("Empate!!! \nOs dois empataram! \n");
      
    }
  }
  //Caso um dos dois passasse de 21 vai verificar quem passou de 21
  else{
   
    if(vctotal > 21 && pctotal > 21){
       printf("Empate!!! \nOs dois passaram de 21! \n");
    }
    else if(vctotal > 21 || pctotal > 21){
      if(vctotal > 21){
        printf("Voce perdeu \nPois passou de 21 \n");
      }
      else if(pctotal > 21){
        printf("Voce ganhou \nPois o PC passou de 21 \n");
      }
    }
  }

	printf("\nDeseja continuar o jogo ? (1-sim / 2-nao) \n");
	scanf("%d", &res);
	if(res == 1){
		goto start;
	}
  printf("\nFim do programa \n");
}
