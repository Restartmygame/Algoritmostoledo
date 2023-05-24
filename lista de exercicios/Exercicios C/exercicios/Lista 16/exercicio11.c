#include <stdio.h>
#include <conio.h>

/*Elaborar um programa que possibilite calcular a área de cada cômodo de uma residência (por exemplo: sala, cozinha, 
banheiro, quartos, etc..). O programa deve solicitar a entrada do nome, da largura e do comprimento de um determinado
cômodo, em seguida deverá apresentar a área do cômodo lido e também a mensagem solicitando ao usuário a confirmação 
de continuar calculando novos cômodos. A operação deve ser repetida até que o usuário responda "1 - NÃO". Área = largura *
comprimento.*/

void main(){
	
	char nome[100];
	float larg, comp, area;
	int resp = 0;
	
	while(resp != 1){
	
		printf("Digite o nome do comodo: ");
		scanf("%s", nome);
		printf("Digite a largura no comodo: ");
		scanf("%f", &larg);
		printf("Digite o comprimento do comodo: ");
		scanf("%f", &comp);
	
		//cálculo da area
		area = larg * comp;
		
		//exibição da área
		printf("Area do comodo: %0.2f\n", area);
		
		//continuação
		printf("Gostaria de continuar registrando comodos? (1 - nao): ");
		scanf("%d",&resp);
	}
	
	
	

}
