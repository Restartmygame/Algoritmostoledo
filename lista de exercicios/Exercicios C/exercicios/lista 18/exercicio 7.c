#include <stdio.h>
#include <conio.h>

/*7.Criar um algoritmo em que leia quatro números inteiros e imprima o maior e o menor número da lista. */

void main(){
	
	int i, num, num_maior, num_menor;
	
	for(i=1; i<=4; i++){
		
		printf("Informe um numero: ");
		scanf("%d", &num);
		
		if(i == 1){ // atribui o maior e o menor como o numero digitado na primeira leitura
			num_maior = num;
			num_menor = num;
		}
		
	
		if(num > num_maior){ //se o numero digitado for maior que a variavel de numero maior
			num_maior = num;
		}
		
		if(num < num_menor){ //se o numero digitado for menor que a variavel de numero menor
			num_menor = num;
		}
		
		
	}
	printf("O maior numero eh o %d\n", num_maior);
	printf("O menor numero eh o %d", num_menor);
	
}
