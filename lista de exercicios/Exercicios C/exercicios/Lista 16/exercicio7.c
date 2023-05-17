#include <stdio.h>
#include <conio.h>

/*Desenvolva um programa que apresente todos os números divisíveis por 4 na faixa de 20 a 60.*/

void main(){
	int num = 20;
	
	while (num >= 20 && num <= 60){

		if(num % 4 == 0){
		printf("%d eh divisivel por 4\n ", num);
		}
		num++;
	}
}
