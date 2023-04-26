#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo que leia seu nome e em uma segunda variável leia seu sobrenome e ao final exiba seu nome concatenado com seu sobrenome.*/

void main(){
	
	char nome[100];
	char sobrenome[100];
	
	printf("Escreva seu Nome: ");
	scanf("%s", nome);
	printf("Escreva seu Sobrenome: ");
	scanf("%s", sobrenome);
	
	printf("Seu nome completo eh: %s %s", nome, sobrenome);
	
}
