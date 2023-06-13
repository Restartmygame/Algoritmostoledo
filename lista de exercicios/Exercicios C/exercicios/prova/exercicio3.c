#include <stdio.h>
#include <conio.h>

/*WHILE - Construa um algoritmo que leia as seguintes informações do usuário: 
número inteiro preferido, saldo bancário atual, sexo (1-M;2-F). A cada leitura, 
o algoritmo deverá exibir se o número é par ou ímpar (ok), se o saldo é positivo ou negativo e ao final(ok), deverá mostrar: 
- Total de números pares; ok
- Total de usuários com saldo negativo do sexo masculino; ok
- Total de participantes; ok
- Saldo acumulado de todos os participantes. ok
Após a leitura, o usuário deverá responder se deseja continuar ou não "Continuar: 1. Sim 2. Não?.
 A repetição só finaliza, quando o usuário responder "Não".
*/

void main(){
	
	int num_fav, sexo, resp=1, quant_pares=0, quant_partici=0, quant_mascu_neg=0;
	float saldo, soma_saldos;
     
     while(resp != 2){
		printf("Digite seu numero inteiro favorito: ");
		scanf("%d", &num_fav);
		printf("Digite seu saldo bancario atual: ");
		scanf("%f", &saldo);
		printf("Digite seu sexo(1 = Masculino, 2 = Feminino): ");
		scanf("%d", &sexo);
		
		//numero favorito par ou impar
		if(num_fav % 2 == 0){
			printf("Seu numero favorito eh par!!\n");
			//contagem de numeros pares
			quant_pares++;
		}
		else{
			printf("seu numero favorito eh impar!!\n");
		}
		
		//definir se o saldo eh positivo ou negativo
		if(saldo >= 0){
			printf("Seu saldo eh positivo!!\n");
		}
		else{
			printf("Seu saldo eh negativo!!\n");
		}
		
		//quantidade de participantes
		quant_partici++;
		
		//soma do saldo de todos os participantes
		soma_saldos = soma_saldos + saldo;
		
		//calculo do total de usuários com saldo negativo do sexo masculino;
		if(sexo == 1 && saldo < 0){
			quant_mascu_neg++;
		}
		
		
		//repetição
		printf("deseja continuar a pesquisa?(1 = sim, 2 = nao): ");
		scanf("%d", &resp);
	 }
	 printf("A quantidade de numeros favoritos pares eh de %d\n", quant_pares);
	 printf("A pesquisa teve um total de %d participantes!!\n", quant_partici);
	 printf("A soma do saldo de todos os participantes equivale a %f reais!!!\n", soma_saldos);
	 printf("A pesquisa teve %d participantes masculinos com saldo negativo!", quant_mascu_neg);
	     
	
     
}
