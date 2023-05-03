#include <stdio.h>
#include <conio.h>

/*5- Escreva um algoritmo que leia 4 números, após a leitura multiplique todos e exibir o resultado.*/

void main(){
	
	int num1, num2, num3, num4, mult;
	
	printf("Esse algoritmo vai ler 4 numeros e multiplica-los\n");
	printf("Escreva o primeiro numero: ");
	scanf("%d", &num1);
	printf("Escreva o segundo numero: ");
	scanf("%d", &num2);
	printf("Escreva o terceiro numero: ");
	scanf("%d", &num3);
	printf("Escreva o quarto numero: ");
	scanf("%d", &num4);
	
	mult = num1 * num2 * num3 * num4;
	
	printf("A multiplicação dos 4 numeros eh: %d", mult);
	
	
	
}
