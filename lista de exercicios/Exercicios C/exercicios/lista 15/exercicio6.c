#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo que leia 3 números e ao final subtraia o primeiro do segundo e divida o resultado pelo terceiro.*/

void main(){
	
	int num1, num2, num3;
	float  div;
	
	printf("Esse algoritmo vai subtrair 2 numeros e dividir por um terceiro\n");
	printf("Escreva o primeiro numero da subtracao: ");
	scanf("%d", &num1);
	printf("escreva o segundo numero da subtracao: ");
	scanf("%d", &num2);
	printf("escreva o numero que vai dividir a soma dos 2 primeiros: ");
	scanf("%d", &num3);
	
	div = (float)(num1 - num2) / (float)num3;
	
	printf("O resultado da operacao deu : %0.2f", div);
	
	
	
}
