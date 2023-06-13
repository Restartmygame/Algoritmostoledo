#include <stdio.h>
#include <conio.h>

/*Dados três valores A, B e C, em que A e B são números reais e C é um inteiro, 
 pede-se para imprimir o resultado da operação aritmética de A por B de acordo com 
 a opção informada em C, sendo: 1 - subtração; 2 - divisão, 3 - soma e 4 - multiplicação.
 Se não for digitado uma das opções, exibir opção inválida. Tratar erro de divisão por zero. 
 Para cada repetição, deverá verificar a necessidade do usuário em continuar.*/

void main(){
    
    int C, resp = 1;
    float A, B, valor;
    
	while(resp != 2){
		
		printf("escolha a operacao desejada\n");
		printf("1 - subtracao\n");
		printf("2 - divisao\n");
		printf("3 - soma\n");
		printf("4 - multiplicacao\n");
		scanf("%d", &C);
		
		switch(C){
	
			case 1:
				printf("digite o primeiro numero da operacao: ");
				scanf("%f", &A);
				printf("digite o segundo numero da operacao: ");
				scanf("%f", &B);
				
				valor = A - B;
				
				printf("A resposta da sua operacao deu %0.2f\n", valor);
				
			break;
			
			case 2:
				printf("digite o primeiro numero da operacao: ");
				scanf("%f", &A);
				printf("digite o segundo numero da operacao: ");
				scanf("%f", &B);
				
				if(A == 0 || B == 0){
					printf("Impossivel dividir por zero!!!\n");
				}
				else{
					valor = A / B;
					
					printf("A resposta da sua operacao deu %0.2f\n", valor);
				}
					
			break;
			
			case 3:
				printf("digite o primeiro numero da operacao: ");
				scanf("%f", &A);
				printf("digite o segundo numero da operacao: ");
				scanf("%f", &B);
				
				valor = A + B;
				
				printf("A resposta da sua operacao deu %0.2f\n", valor);
				
			break;
			
			case 4:
				printf("digite o primeiro numero da operacao: ");
				scanf("%f", &A);
				printf("digite o segundo numero da operacao: ");
				scanf("%f", &B);
				
				valor = A * B;
				
				printf("A resposta da sua operacao deu %0.2f\n", valor);
				
			break;
		}
		
		
		printf("Deseja fazer outro calculo? (1 = sim, 2 = nao): ");
		scanf("%d", &resp);
		
		
		
	}
	
	 
}
