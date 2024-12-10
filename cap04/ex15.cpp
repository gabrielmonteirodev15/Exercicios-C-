#include<stdio.h>
#include<windows.h>

/*
Crie um programa em C, usando FOR, para receber as notas de 10 alunos, 
e ao final exibir quantos deles estão de recuperação, e quantos já estão aprovados. 
Considerar que estão de recuperação os alunos com notas inferiores a 6, 
e os aprovados com as notas iguais ou superiores a 6.
*/

main(){
	
	int alunosAprovados, alunosReprovados, cont;
	float nota;
	
	printf("Programa para informar quantidade de alunos aprovados e reprovados \n");
	
	for(cont = 1; cont <= 10; cont++){
		printf("Informe a nota do aluno %d \n", cont);
		scanf("%f", &nota);
		
		if(nota <= 5.9){
			alunosReprovados += 1;
		}
		else if(nota > 6){
			alunosAprovados +=1;
		}
	}
	
	printf("O total de alunos aprovados e de %d \n", alunosAprovados);
	printf("O total de alunos reprovados e de %d \n", alunosReprovados);	
	
}
