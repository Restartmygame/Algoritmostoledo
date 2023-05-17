#include <stdio.h>
#include <conio.h>

/*Faça um programa como uma estrutura de repetição começando de 1 e vai até o número informado pelo usuário.*/

void main(){
	int n, i = 1;
	printf("Escreva o número final que será repetido: ");
	scanf("%d", &n);
	
	while (i <= n){
		printf("%d\n",i);
		i++;
	}


}
