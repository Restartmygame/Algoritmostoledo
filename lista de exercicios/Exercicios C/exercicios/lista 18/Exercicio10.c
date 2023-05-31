#include <conio.h>
#include <stdio.h>

void main(){
	int i, cont_azul = 0;
	int cor_olho, qtde_olhos_pretos = 0, cont_turma = 0;
	float salario, maior_salario = 0, salario_turma = 0;
	float media_salario_turma, salario_azul = 0;
	float media_salario_azul;
	for(i=1;i<=3;i++){
		printf("Informe o Salario: ");
		scanf("%f", &salario);
		printf("Informe a Cor Olho (1-Azul, 2-Preto): ");
		scanf("%d", &cor_olho);
		
		if(cor_olho == 2){//A quantidade pessoas com olhos pretos.
		qtde_olhos_pretos++;}
		
		if(salario > maior_salario){//O maior salário;
			maior_salario = salario;
		}
	
		//A média de salário da turma.
		cont_turma++; //contador de qtde
		salario_turma += salario; //acumulador de salario
		
		//A média de salário de quem ter cor dos olhos azul;
		if(cor_olho == 1){
			cont_azul++; //contador de qtde
			salario_azul += salario; //acumulador de salario	
		}
	}
	printf("\nQtde Olhos Pretos: %d", qtde_olhos_pretos);
	printf("\nMaior Salario: %0.2f", maior_salario);	

	media_salario_turma = salario_turma / cont_turma;
	
	printf("\nMedia Salario Turma: %0.2f", media_salario_turma);	

	media_salario_azul = salario_azul / cont_azul;
	
	printf("\nMedia Salario Cor Azul: %0.2f", media_salario_azul);
}
