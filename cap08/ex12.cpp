#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#include<time.h> 

/*
Crie um programa em C para ajudar uma Organização a calcular os custos que tiveram nas
premiações de uma competição de atletismo. O programa deve receber os 10 nomes dos países
que foram representados na competição, seguidos do total de medalhas de ouro, prata e bronze
que conseguiram. Seguem os demais requisitos:
- Calcular o custo que tiveram com as medalhas dos competidores, sendo os valores: Ouro = R$
110,00 | Prata = R$ 75,50 | Bronze = R$ 42,00;
- Exibir o custo total de cada tipo de medalha, e de todas juntas;
- Exibir qual foi o país vencedor da competição, baseado na quantidade de medalhas de ouro,
prata e bronze. Considerar para o desempate, respectivamente: quem teve maior quantidade de
medalhas de ouro, de prata, e de bronze.
- Caso haja empate na quantidade de todas as medalhas entre dois ou mais países, exibir
somente um deles e desconsiderar os restantes.

*/

main() {
    char paises[10][50];
    int ouro[10], prata[10], bronze[10];
    float custoOuro = 110.00, custoPrata = 75.50, custoBronze = 42.00;
    float totalOuro = 0, totalPrata = 0, totalBronze = 0, totalGeral = 0;
    int i, vencedor = 0, maiorOuro = 0, maiorPrata = 0, maiorBronze = 0;

    
    printf("Digite os nomes dos paises e a quantidade de medalhas de ouro, prata e bronze:\n");
    for (i = 0; i < 10; i++) {
    	fflush(stdin);
        printf("Informe o pais \n");
        gets(paises[i]);
        printf("Informe a quantida de medalhas de ouro do pais %s \n", paises[i]);
        scanf("%d", &ouro[i]);
        printf("Informe a quantida de medalhas de prata \n", paises[i]);
        scanf("%d",&prata[i]);
        printf("Informe a quantida de medalhas de bronze \n", paises[i]);
        scanf("%d", &bronze[i]);
       
    }

   
    for (i = 0; i < 10; i++) {
        totalOuro += ouro[i] * custoOuro;
        totalPrata += prata[i] * custoPrata;
        totalBronze += bronze[i] * custoBronze;
    }
    totalGeral = totalOuro + totalPrata + totalBronze;

  
    for (i = 0; i < 10; i++) {
        if (ouro[i] > maiorOuro) {
            vencedor = i;
            maiorOuro = ouro[i];
            maiorPrata = prata[i];
            maiorBronze = bronze[i];
        } else if (ouro[i] == maiorOuro) {
            if (prata[i] > maiorPrata) {
                vencedor = i;
                maiorPrata = prata[i];
                maiorBronze = bronze[i];
            } else if (prata[i] == maiorPrata && bronze[i] > maiorBronze) {
                vencedor = i;
            } else if (prata[i] == maiorPrata && bronze[i] == maiorBronze) 
                vencedor = rand() % i + 1;
            }
        }
    


    printf("\nResultados:\n");
    printf("Custo total das medalhas de ouro: R$ %.2f\n", totalOuro);
    printf("Custo total das medalhas de prata: R$ %.2f\n", totalPrata);
    printf("Custo total das medalhas de bronze: R$ %.2f\n", totalBronze);
    printf("Custo total geral: R$ %.2f\n", totalGeral);
    printf("Pais vencedor: %s\n", paises[vencedor]);

    
}
