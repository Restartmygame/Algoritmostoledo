#include <stdio.h>
#include <conio.h>

/*3	O sistema de avalia��o de uma determinada disciplina obedece aos seguintes crit�rios:
	Durante o semestre s�o dadas tr�s notas;
	A nota final � obtida pela m�dia aritm�tica das notas dadas durante o curso;
	� considerando aprovado o aluno que obtiver a nota final superior ou igual a 6,0 e que tiver comparecido a um m�nimo de 40 aulas.
	Fazer um algoritmo que:

a)	Leia um conjunto de dados contendo o n�mero de matr�cula, as tr�s notas e a frequ�ncia de 10 alunos;

b)	Calcule e exiba:
"	A nota final de cada aluno;
"	A maior e menor nota da turma;
"	A nota m�dia da turma;
"	O total de alunos reprovados;
"	A porcentagem de alunos reprovados por faltas.
*/

void main(){
	
	int matricula, alunos = 0;
	float nota1, nota2, nota3, frequencia;
	char veredito,
	do{
		printf("Digite o numero de matricula do aluno: ");
		scanf("%d", &matricula);
		printf("Digite sua a 1a nota: ");
		scanf("%f", &nota1);
		printf("Digite sua a 2a nota: ");
		scanf("%f", &nota2);
		printf("Digite sua a 3a nota: ");
		scanf("%f", &nota3);
		printf("Digite a quantidade de aulas que o aluno participou: ");
		scanf("%f", &frequencia);
		
		//calculo da nota final do aluno
		notafinal = (nota1 + nota2 + nota3) / 3;
		
		
		alunos++; //acresenta mais um aluno para a leitura
	}while(alunos < 10)
	
	
	
	
}
