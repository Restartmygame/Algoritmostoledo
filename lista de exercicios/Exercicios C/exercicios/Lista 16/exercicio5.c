#include <stdio.h>
#include <conio.h>

/*- Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa de 1 até 20.*/

void main(){
	int n = 1, soma = 0;
	while(n <=20){
		if(n % 2 == 0){ 
			soma = soma + n;	
		}
		n++;
	}
	printf("A somatoria dos numeros pares eh %d", soma);


}
