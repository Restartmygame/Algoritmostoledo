#include <stdio.h>
#include <conio.h>

/*Elaborar um programa que apresente o resultado da soma dos valores pares situados na faixa numérica de 50 a 80.*/

void main(){
	
	int soma=0, num = 50;
	while(num >= 50 && num <= 80){
		if(num % 2 == 0){
			soma = soma + num;
		}
		num++;
	}
	
	printf("a soma dos numeros pares eh %d", soma);

}
