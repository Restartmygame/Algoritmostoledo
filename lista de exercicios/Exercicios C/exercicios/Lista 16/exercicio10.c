#include <stdio.h>
#include <conio.h>

/*Escreva um programa que leia o primeiro nome e a altura das mo�as inscritas em um concurso de beleza. Para cada leitura dever� ser 
realizado uma pergunta para o usu�rio para parar ou continuar (1 -continuar, 2 - parar). Ao final o programa 
dever� exibir: a altura da mo�a mais alta e o n�mero de mo�as no concurso. Considere que todas as mo�as possuem altura diferente.*/

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
