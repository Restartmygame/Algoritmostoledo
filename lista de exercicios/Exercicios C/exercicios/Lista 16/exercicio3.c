#include <stdio.h>
#include <conio.h>

/*3 - Faça um programa que mostre os valores da tabuada do dois de 0 a 10.*/

void main(){
	int n = 0, i = 1;
	while (n < 20){
		n = 2 * i;
		printf("2 x %d = %d\n", i, n);
		i++;
	}
}
