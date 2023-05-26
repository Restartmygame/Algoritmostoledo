#include <stdio.h>
#include <conio.h>

/*1.	Escreva um algoritmo, que leia um conjunto de 10 fichas, cada uma contendo, 
		a altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e calcule e imprima:
- a maior e a menor altura da turma; !pronto
- a média de altura das mulheres; 
- a média de altura da turma. ! pronto
- a quantidade de homens. !pronto
*/

void main(){
	
	float altura, altura_maior = 0, altura_menor = 0, soma_altura = 0, MediaAlturaTodos = 0, soma_altura_mulher = 0, MediaAlturaMulheres = 0;
	int sexo, quant = 0, quant_homem = 0, quant_altura = 0, quant_altura_mulher = 0;
	
	do{
	
		printf("escreva sua altura: ");
		scanf("%f", &altura);
		printf("Digite o seu sexo (1- masculino; 2 - feminino): ");
		scanf("%d", &sexo);
		
		if(sexo == 1){
			quant_homem++;  //conta a quantidade de homens
		}
		
		if(quant == 0){
			altura_maior = altura;  //na primeira leitura de participante a maior e menor altura vai receber a altura porque é a primeira
			altura_menor = altura;
		}
		else{							//se a quantidade de participantes for diferente de zero (não for a primeira leitura)1 ele vem para essa seção
			if(altura > altura_maior){	//caso a altura seja maior que a altura maior a altura maior recebe a altura
				altura_maior = altura;		
			}
			else{
				if(altura < altura_menor){ //caso a altura seja menor que a altura menor a altura menor recebe a altura
					altura_menor = altura;
				}
			}
		}
		
		//media de altura da turma
		
		soma_altura = soma_altura + altura;
		quant_altura++;
		
		//media de altura das mulheres
		
		if(sexo == 2){
			soma_altura_mulher = soma_altura_mulher + altura;
			quant_altura_mulher++;
		}
		
		
		
		quant++; //conta um participante a mais
	}while(quant < 10);
	
	//calculo da media da altura de todos
	MediaAlturaTodos = soma_altura / quant_altura;
	
	//calculo da media da altura das mulheres
	MediaAlturaMulheres = soma_altura_mulher / quant_altura_mulher;
	
	
	//impressão dos pedidos
	printf("\n\n");
	printf("Existem %d participantes homens\n", quant_homem);
	printf("A maior altura eh de %0.2f e a menor eh de %0.2f\n", altura_maior, altura_menor);
	printf("A media de altura da turma eh %f\n", MediaAlturaTodos);
	printf("A media da altura das mulheres eh %0.2f", MediaAlturaMulheres);
	
}
