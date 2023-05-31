#include <stdio.h>
#include <conio.h>

/*8. Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprima todos os números pares 
no intervalo aberto e seu somatório. Suponha que os dados digitados são para um intervalo crescente, ou seja, o 
primeiro valor é menor que o segundo.*/

void main(){
	
	int limi_low, limi_high, i, soma_par = 0;
	
	printf("Digite o limite inferior do intervalo: ");
	scanf("%d", &limi_low);
	printf("digite o limite superior do intervalo: ");
	scanf("%d", &limi_high);
	
	printf("Numeros pares: ");
	
	for(i = limi_low; i <= limi_high; i++){
		if(i % 2 == 0){
			printf("\n%d", i);
			soma_par = soma_par + i;	
		}
		
	}
	
	printf("\n a soma dos numeros pares do seu intervalo eh de %d", soma_par);
	
}
