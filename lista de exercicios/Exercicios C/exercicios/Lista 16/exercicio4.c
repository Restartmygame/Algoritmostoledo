#include <stdio.h>
#include <conio.h>

/*Desenvolva um programa que apresente os quadrados dos números inteiros de 1 a 10.*/

void main(){
	int i = 1 , quad = 0;
	
	while(i <= 10){
	quad = i * i;
	printf("%d ^ 2 = %d\n", i, quad);
	i++;
	}
}
