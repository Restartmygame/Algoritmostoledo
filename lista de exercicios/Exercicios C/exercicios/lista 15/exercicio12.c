#include <stdio.h>
#include <conio.h>

/* 10 - S�o informados dois valores num�ricos correspondentes as notas de um determinado aluno. Deseja-se um algoritmo que permita 
responder "aprovado" se o aluno obtiver m�dia aritm�tica simples igual ou superior a 7,0 caso contr�rio "Reprovado". Mostre tamb�m 
a m�dia de aprova��o do aluno.*/

void main(){
	
	float n1, n2, med;
	
	printf("Esse algoritmo vai dizer se o aluno foi aprovado ou nao baseado na sua media de duas notas\n");
	printf("Escreva sua primeira nota: ");
	scanf("%f", &n1);
	printf("Escreva sua segunda nota: ");
	scanf("%f", &n2);
	
	med = (n1 + n2) / 2;
	
	printf("Sua media eh %f e voce foi: ", med);
	
	if (med >= 7){
		printf("Aprovado!!!");
	}
	else{
		printf("Reprovado!!!");
	}
}
