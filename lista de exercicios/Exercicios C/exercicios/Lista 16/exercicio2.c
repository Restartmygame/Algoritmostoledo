#include <stdio.h>
#include <conio.h>

/*Fa�a um programa como uma estrutura de repeti��o come�ando de 1 e vai at� o n�mero informado pelo usu�rio.*/

void main(){
	int n, i = 1;
	printf("Escreva o n�mero final que ser� repetido: ");
	scanf("%d", &n);
	
	while (i <= n){
		printf("%d\n",i);
		i++;
	}


}
