#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo que leia 2 números, após a leitura somar e exibir o resultado.*/

void main(){
	
	int num1, num2, soma;

	
	
	printf("Escreva o primeiro numero: ");
	scanf("%i", &num1);
	printf("Escreva o segundo numero: ");
	scanf("%i", &num2);
	
	soma = num1 + num2;
	
	printf("A Soma dos numeros eh: %d", soma);
	
	
}
