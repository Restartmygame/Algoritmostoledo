#include <stdio.h>
#include <conio.h>

/*Elaborar um programa que possibilite calcular a �rea de cada c�modo de uma resid�ncia (por exemplo: sala, cozinha, 
banheiro, quartos, etc..). O programa deve solicitar a entrada do nome, da largura e do comprimento de um determinado
c�modo, em seguida dever� apresentar a �rea do c�modo lido e tamb�m a mensagem solicitando ao usu�rio a confirma��o 
de continuar calculando novos c�modos. A opera��o deve ser repetida at� que o usu�rio responda "1 - N�O". �rea = largura *
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
	
		//c�lculo da area
		area = larg * comp;
		
		//exibi��o da �rea
		printf("Area do comodo: %0.2f\n", area);
		
		//continua��o
		printf("Gostaria de continuar registrando comodos? (1 - nao): ");
		scanf("%d",&resp);
	}
	
	
	

}
