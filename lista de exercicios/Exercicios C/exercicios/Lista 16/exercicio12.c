#include <stdio.h>
#include <conio.h>

/*Fa�a um programa que leia um n�mero indeterminado de idades. A �ltima idade lida, que n�o entrar� nos c�lculos, 
dever� ser igual a zero. Ao final programa dever� escrever quantas idades foram lidas, calcular e escrever a m�dia
de idade desse grupo de idades.*/

void main(){
	
	int idade = 1, quant=0, soma = 0, num=1;
	float med;
	
	while (idade != 0){
	
		printf("Digite a %da idade: ", num);
		scanf("%d",&idade);
		if(idade != 0){
			quant++;
			soma = soma + idade;
			med = soma / quant;
		}
		num++;
	}
	
	printf("foram lidas %d idades\n",quant);
	printf("a media de idades inseridas eh de %0.2f", med);
	
	
}
