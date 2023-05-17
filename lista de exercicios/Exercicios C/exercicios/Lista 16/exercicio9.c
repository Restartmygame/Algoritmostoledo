#include <stdio.h>
#include <conio.h>

/*Escreva um programa onde os números lidos serão somados até que a soma destes números seja igual ou maior do que 100.*/

void main(){
	int num = 0, soma = 0, i = 1;

	printf("Esse algoritmo irá somar seus numeros ate a soma ser igual ou maior a 100\n");
	
	while(soma < 100){
	printf("Escreva seu %do numero: ", i);
	scanf("%d",&num);
	soma = soma + num;
	i++;
	
	}
	printf("Fim do algoritmo, a soma total deu %d", soma);

}
