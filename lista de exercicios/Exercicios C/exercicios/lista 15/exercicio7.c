#include <stdio.h>
#include <conio.h>

/*6 - Escreva um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, ao final exiba a idade que essa pessoa tem.*/

void main(){
	
	int anoa, anona, idade;
	
	printf("Esse algoritmo diz a sua idade exata \n");
	printf("que ano estamos? : ");
	scanf("%d", &anoa);
	printf("que ano voce nasceu? : ");
	scanf("%d", &anona);
	
	idade = anoa - anona;
	
	printf("Voce tem %d anos", idade);
	
}
