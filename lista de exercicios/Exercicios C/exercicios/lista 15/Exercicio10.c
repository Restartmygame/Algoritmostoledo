#include <stdio.h>
#include <conio.h>

/*10- Elabore um algoritmo que informe o maior n�mero entre dois n�meros conhecido pelo usu�rio.*/

void main(){
	
	int num1, num2;
	
	printf("Esse algoritmo vai dizer qual numero eh maior\n");
	printf("Escreva o primeiro numero: ");
	scanf("%d", &num1);
	printf("Escreva o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("%d eh maior!", num1);
	}
	else{
		if(num1 == num2){
			printf("Os numeros sao iguais!!");
		}
		else{
			printf("%d eh maior", num2);
		}
	}
	
	
}
