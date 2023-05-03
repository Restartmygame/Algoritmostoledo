#include <stdio.h>
#include <conio.h>

/*13 - Faça um algoritmo que ao receber um número qualquer, seja capaz de verificar se o mesmo é ou não negativo.*/

void main(){
	
	float num;
	
	printf("Esse algoritmo dira se seu numero eh negativo ou positivo\n");
	printf("Digite seu numero: ");
	scanf("%f", &num);
	
	if(num > 0){
		printf("Seu numero eh positivo!!!");
	}
	else{
		if(num == 0){
			printf("Seu numero eh neutro!!!");
		}
		else{
			printf("Seu numero eh negativo!!!");
		}
			
	}
	
}
