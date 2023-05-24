#include <stdio.h>
#include <conio.h>

/*Escreva um programa que leia o primeiro nome e a altura das moças inscritas em um concurso de beleza. Para cada leitura deverá ser 
realizado uma pergunta para o usuário para parar ou continuar (1 -continuar, 2 - parar). Ao final o programa 
deverá exibir: a altura da moça mais alta e o número de moças no concurso. Considere que todas as moças possuem altura diferente.*/

void main(){
	
	char nome[100];
	float altura, altmax = 0;
	int cont = 1, quant = 0;
	
	while(cont == 1){
		
		printf("digite seu nome: ");
		scanf("%s",nome);
		printf("digite sua altura: ");
		scanf("%f",&altura);
		
		quant++;
		
		if(altura > altmax){
			altmax = altura;
		}
		
		printf("Deseja continuar a leitura?\n 1- Sim 2- Nao:\n");
		scanf("%d", &cont);
	
	}
	
	printf("A quantidade de participantes do concurso eh: %d\n",quant);
	printf("A maior altura eh %0.2f",altmax);

}
