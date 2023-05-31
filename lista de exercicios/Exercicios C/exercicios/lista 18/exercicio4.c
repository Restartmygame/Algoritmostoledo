#include <stdio.h>
#include <conio.h>

/*4.	Escreva um algoritmo em que receba 5 números e imprima quantos números maiores que 30 foram digitados. */

void main(){
	
	int i, num, quant_maior_30 = 0;
	
	for(i=1; i <= 5; i++){
		printf("Escreva seu numero: ");
		scanf("%d", &num);
		
		if(num > 30){
			quant_maior_30++;
		}
		
	}
	
	if(quant_maior_30 == 1){
		
		printf("foi digitado %d numero maior que 30", quant_maior_30);	
		
	}
	else{
		printf("foram digitados %d numeros maiores que 30", quant_maior_30);
	}
	
	
}
