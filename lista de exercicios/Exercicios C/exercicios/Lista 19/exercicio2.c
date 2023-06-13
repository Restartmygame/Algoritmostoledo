#include <stdio.h>
#include <conio.h>

/*2.	Escreva um algoritmo que:
- leia 7 fichas, onde cada ficha contém o número de matrícula e a nota de cada aluno de um determinado curso;
- determine e imprima as duas maiores notas, juntamente com o número de matrícula do aluno que obteve cada uma delas;
- Suponha que não exista dois ou mais alunos com a mesma nota.
*/

void main(){
     
     int i, num, aluno_maior=0, aluno_segundo_maior=0;
     float nota, nota_maior=0, segunda_maior=0;
	
	for(i=1;i<=7;i++){
                      
           printf("\naluno %d:\n",i);                
           printf("escreva seu numero de matrucula: ");
           scanf("%d",&num);
           printf("escreva sua nota: ");
           scanf("%f",&nota);
           
           if(i == 1){
                nota_maior = nota;
                segunda_maior = nota;
                aluno_segundo_maior = num;
                aluno_maior = num;
                printf("teste\n");     
           }
           else{
                 if(nota < nota_maior && nota > segunda_maior){
                   segunda_maior = nota;
                   aluno_segundo_maior = num;
           }                 
           
                 if(nota > nota_maior){
                   aluno_segundo_maior = aluno_maior;
                   segunda_maior = nota_maior;
                   nota_maior = nota;
                   aluno_maior = num;
                   
                 }
           }
           
           
          
    
    
    }
    
    printf("O aluno com a maior nota eh o numero %d com uma nota de %0.2f\n", aluno_maior, nota_maior);
    printf("O aluno com a segunda maior nota eh o numero %d com uma nota de %0.2f", aluno_segundo_maior, segunda_maior);
    
    system("pause");
    
    return 0;
	
}
