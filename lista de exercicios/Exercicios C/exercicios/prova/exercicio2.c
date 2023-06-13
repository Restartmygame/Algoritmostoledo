#include <stdio.h>
#include <conio.h>

/*FOR - Faça um programa para ler o salário, cor dos alhos (1-azul, 2-verde, 3-preto ou 4-castanho)
 e o sexo (1-feminino, 2-masculino) de 4 pessoas. Calcular e escrever:
- O maior salário que informou a cor dos olhos verde; ok
- O menor salário do sexo masculino; ok
- A média salarial das mulheres com cor dos olhos azul; ok
- Total de pessoas com cor do olho castanho. ok
*/

void main(){
     
     int olhos, sexo, i, soma_olho_casta=0, quant_fem=0;
     float salario, maior_salario_verde, menor_salario_fem, soma_salario_fem, media_fem_azul;
     
    	for(i=1; i<=4; i++){
	 
		    printf("Informe seu salario: ");
		    scanf("%f", &salario);
		    printf("informe a cor dos seus olhos (1-azul, 2-verde, 3-preto ou 4-castanho): ");
		    scanf("%d", &olhos);
		    printf("informe seu sexo (1-feminino, 2-masculino): ");
		    scanf("%d", &sexo);
		    
		    //maior salario com cor de olho verde
		    
			if(olhos == 2){
				if(i == 1){
					maior_salario_verde = salario;
				}
				else{
					if(salario > maior_salario_verde){
						maior_salario_verde = salario;
					}
				}
			}
			
			//menor salario do sexo feminino
			if(sexo = 1){
				if(i == 1){
					menor_salario_fem = salario;
				}
				else{
					if(salario < menor_salario_fem){
						menor_salario_fem = salario;
					}
				}
			}
			
			//total de pessoas com olhos castanhos
			if(olhos == 4){
				soma_olho_casta++;
			}
			
			//média salarial das mulheres com cor dos olhos azul;
			
			if(sexo == 1 && olhos == 1){
				soma_salario_fem = soma_salario_fem + salario;
			}
			
			//contagem de mulheres
			if(sexo == 1){
				quant_fem++;
			}
		    
		}
		
		printf("A pessoa de olhos verdes com o maior salario ganha %f reais\n", maior_salario_verde);
		printf("A pessoa feminina com o menor salario ganha %f reais\n", menor_salario_fem);
		printf("Esta pesquisa possui %d pessoas com olhos castanhos\n", soma_olho_casta);
		
		//calculo da media salarial das mulheres com cor dos olhos azuis
		media_fem_azul = soma_salario_fem / quant_fem;
		
		printf("A media salarial das mulheres com cor dos olhos azuis eh de %f reais", media_fem_azul);
		
		
     
     
}
