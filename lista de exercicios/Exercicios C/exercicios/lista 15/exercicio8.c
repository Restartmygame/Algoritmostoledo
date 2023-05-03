#include <stdio.h>
#include <conio.h>

/*8- Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.*/

void main(){
	
	float n1, n2, n3, tot, med;
	
	printf("Esse algorimto vai calcular a media de 3 notas de um aluno\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	tot = n1 + n2 + n3;
	med = tot / 3;
	
	printf("Sua media eh %0.1f", med);
	
}
