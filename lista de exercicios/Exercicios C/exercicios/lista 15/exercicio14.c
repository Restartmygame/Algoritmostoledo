#include <stdio.h>
#include <conio.h>

/*14 - Elabore um algoritmo que informe o maior numero entre tr�s n�meros conhecido pelo usu�rio. (Considere n�mero iguais).*/

void main(){
	
	float n1, n2, n3;
	
	printf("Esse algoritmo dira qual dos tres numeros informados eh maior\n");
	printf("Digite o Primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o Segundo numero: ");
	scanf("%f", &n2);
	printf("Digite o Terceiro numero: ");
	scanf("%f", &n3);
	
	if(n1 == n2 && n1 == n3){
		printf("Todos os numeros sao iguais!!!");
	}
	else{
		if(n1 > n2 && n1 > n3 ){
			printf("%f eh maior", n1);
		}	
	
		else{
		if(n2 > n1 && n2 > n3){
			printf("%f eh maior", n2);
		}
		else{
			printf("%f eh maior", n3);
		}
	  }
	}
	
}
