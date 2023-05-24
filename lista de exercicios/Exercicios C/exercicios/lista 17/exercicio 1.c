#include <stdio.h>
#include <conio.h>

/*Escreva um programa para ler 2 notas de um aluno, calcular e imprimir a média final. Logo após escrever a mensagem 
"Calcular a média de outro aluno [1]Sim [0]Não?" e solicitar um resposta. Se a resposta for "1", o programa deve ser 
executado novamente, caso contrário deve ser encerrado imprimindo a quantidade de alunos aprovados.*/

void main(){
	
	float nota1, nota2, media = 0;
	int resp = 1, quant_aprov = 0;
	do{
		printf("Informe a primeira nota: ");
		scanf("%f", &nota1);
		printf("Informe a segunda nota: ");
		scanf("%f", &nota2);
		media = (nota1 + nota2) / 2;
		printf("Media : %0.2f\n", media);
		
		if(media >= 7){
			quant_aprov++;
		}
		printf("Deseja continuar? (1 = Sim; 2 = nao): ");
		scanf("%d", &resp);
		
	}while(resp == 1);
	
	if(quant_aprov == 1){
		printf("apenas %d pessoa foi aprovada!", quant_aprov);
	}
	else{
		printf("%d pessoas foram aprovadas!", quant_aprov);
	}
}
