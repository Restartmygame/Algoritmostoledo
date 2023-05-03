#include <stdio.h>
#include <conio.h>

/*11 - Construa um algoritmo para calcular a média de dois valores inteiros positivos, previamente conhecidos.*/

void main(){
	
	int num1, num2;
	float med;
	
	printf("Esse algoritmo vai fazer a media de dois valores inteiros\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o Segundo numero: ");
	scanf("%d", &num2);
	
	med = (float)(num1 + num2) / 2;
	
	printf("A media dos dois numeros eh %0.2f", med);	
	
	
}
