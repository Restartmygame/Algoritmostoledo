#include <stdio.h>
#include <conio.h>

/*Faça um algoritmo que leia a idade de uma pessoa e ao final exiba quando meses, dias, horas, minutos e segundo que essa pessoa já viveu.*/

void main(){
	
	float idade, mes, dia, hora, minuto, segundo;
	
	printf("Esse algoritmo vai ler sua idade e dizer quantos meses, dias, horas, minutos e segundos que voce ja viveu\n");
	printf("Digite sua Idade: ");
	scanf("%f", &idade);
	
	mes = idade * 12;
	dia = mes * 30;
	hora = dia * 24;
	minuto = hora * 60;
	segundo = minuto * 60;
	
	printf("Voce esta vivo por %f meses, %f dias, %f horas, %f minutos\ne %f segundos!!", mes, dia, hora, minuto, segundo);
	
}
