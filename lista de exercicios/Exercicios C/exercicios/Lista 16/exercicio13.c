#include <stdio.h>
#include <conio.h>

/*Escreva um algoritmo em que receba o número da conta e o saldo de várias pessoas. O algoritmo deve imprimir todas as contas,
os respectivos saldos e uma das mensagens: positivo/negativo. Ao final, o percentual de pessoas com saldo negativo.
O algoritmo acaba quando se digita um número negativo para a conta.*/

void main(){
	
	
	//incompleto
	int num=1, pessneg=0, pesstotal=0;
	float saldo=0, negper;
	
	while(num > 0 ){
	
		printf("Digite o numero da sua conta: ");
		scanf("%d",&num);
		if(num > 0 ){
		
			printf("Digite seu saldo: ");
			scanf("%f", &saldo);
			
			printf("A conta numero %d esta com um saldo de %0.3f\n", num, saldo);
			if(saldo < 0){
				printf("Saldo Negativo!!!!\n");
				pessneg++;
			}
			else{
				printf("Saldo Positivo!!!!\n");
			}
			pesstotal++;
		}
	
	}
	
	negper = (pessneg / pesstotal) * 100;
	printf("a porcentagem de pessoas negativadas eh %f ", negper);
	
}
