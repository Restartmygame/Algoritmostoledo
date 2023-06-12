#include <stdio.h>
#include <conio.h>

/*2.	Escreva um algoritmo que:
- leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado curso;
- determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;
- Suponha que não exista dois ou mais alunos com a mesma nota.
*/

int main(){
	
	int matricula, quant, aluno_melhor = 0, aluno_seg_melhor = 0;
	float nota, segunda_maior = 0, maior_nota = 0;
	
	for(quant=0; quant<7; quant++)
		printf("Escreva seu numero de matricula: ");
		scanf("%d", &matricula);
		printf("Escreva sua nota: ");
		scanf("%f", &nota);
	
	    //determina a maior nota
                    if(nota > maior_nota){
	                	maior_nota = nota;
	                 	aluno_melhor = matricula;
                   	}
	
	                //determina a segunda maior nota
	                if(nota > segunda_maior && nota < maior_nota){
	                	segunda_maior = nota;
	                 	aluno_seg_melhor = matricula;
                   	}
	
	
	
		
	}
	
	printf("\n\nO aluno com a maior nota eh o numero %d com uma nota de %0.2f\n", aluno_melhor, maior_nota);
	printf("O aluno com a segunda melhor nota eh o numero %d com uma nota de %0.2f", aluno_seg_melhor, segunda_maior);
	
	
}
