#include<stdio.h>
#include<windows.h>

/*
Uma pizzaria precisa de um programa em C, usando WHILE, que 
leia as vendas realizadas no dia, recebendo o numero do pedido, e seu valor total. 
Ao final mostre a maior venda, a menor venda, quantos pedidos foram registrados, e a média do valor das vendas. 
Condição de parada é o numero do pedido = 0.
*/
main(){
	int numPedido = 1, quantPedidos;
	float valorPedido, maiorVenda = 1, menorVenda = 1000, mediaValor;
	
	printf("Programa da pizzaria \n");
	
	while(numPedido != 0){
		printf("Digite o numero do pedido (0-Para sair) \n");
		scanf("%d", &numPedido);
	
		if(numPedido == 0){
			break;
		}
	
		printf("Digite o valor do pedido \n R$");
		scanf("%f", &valorPedido);
		
		if(valorPedido > maiorVenda){
			maiorVenda = valorPedido;
		}
		if(valorPedido < menorVenda){
			menorVenda = valorPedido;
		}
		
		printf("Pedido registrado !\n\n");
		quantPedidos += 1;
		mediaValor = mediaValor + valorPedido;
	}
	mediaValor = mediaValor / quantPedidos;
	
	printf("Foram registrados %d vendas \n", quantPedidos);
	printf("A maior venda foi de R$ %.2f \n", maiorVenda);
	printf("A menor venda foi de R$ %.2f \n", menorVenda);
	printf("A media de valor de vendas foi de R$ %.2f \n", mediaValor);
	
}
