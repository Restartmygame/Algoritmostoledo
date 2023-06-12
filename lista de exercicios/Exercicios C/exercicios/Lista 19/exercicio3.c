#include <stdio.h>
#include <conio.h>

/*3	O sistema de avaliação de uma determinada disciplina obedece aos seguintes critérios:
	Durante o semestre são dadas três notas;
	A nota final é obtida pela média aritmética das notas dadas durante o curso;
	É considerando aprovado o aluno que obtiver a nota final superior ou igual a 6,0 e que tiver comparecido a um mínimo de 40 aulas.
	Fazer um algoritmo que:

a)	Leia um conjunto de dados contendo o número de matrícula, as três notas e a frequência de 10 alunos;

b)	Calcule e exiba:
"	A nota final de cada aluno; ok
"	A maior e menor nota da turma; ok
"	A nota média da turma; ok
"	O total de alunos reprovados; ok
"	A porcentagem de alunos reprovados por faltas.
*/

void main(){
	
	int matricula, alunos = 0, alunos_reprovados = 0, reprova_por_falta = 0;
	float nota1, nota2, nota3, frequencia, notafinal, nota_maior, nota_menor,
    soma_notas = 0, media_notas, porcentagem_por_falta;
	char veredito;
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
		
		//contagem de alunos reprovados
		if(frequencia < 40 || notafinal < 6){
                      alunos_reprovados++;
        }
		
		//contagem de alunos reprovados por falta
		if(frequencia < 40){
                      reprova_por_falta++;
        }
		
		alunos++; //acresenta mais um aluno para a leitura
		
		//maior e menor nota
		
		//primeira leitura
		if(alunos == 1){
              nota_maior = notafinal;
              nota_menor = notafinal;    
        }
        //maior
        if(notafinal > nota_maior){
                     nota_maior = notafinal;
        }
        //menor
        if(notafinal < nota_menor){
                     nota_menor = notafinal;
        }
        
        //soma de todas as notas
        soma_notas = soma_notas + notafinal;
        
		
		//exibição da nota final do aluno
		printf("A nota final do aluno %d eh %0.2f\n",matricula, notafinal);
		
	}while(alunos < 3);
	
	//media de todas as notas
	media_notas = soma_notas / alunos;
	
	
	
	
	
	//exibição dos resultados
	printf("\n\n\nA maior nota da turma eh %f\n", nota_maior);
	printf("A menor nota da turma eh %f\n", nota_menor);
	printf("\nA nota media da turma eh %f\n", media_notas);
	printf("\nForam reprovados %d de %d alunos \n", alunos_reprovados, alunos);
	
    //caluclo da procentagem de alunos por falta
    //é necessário transformar pelo menos um dos valores em float 
    porcentagem_por_falta = ((float)reprova_por_falta / (float)alunos) * 100; 
    printf("%0.2f%% dos alunos reprovaram por falta\n", porcentagem_por_falta);
	
    system("pause");
    
    return 0;
}
