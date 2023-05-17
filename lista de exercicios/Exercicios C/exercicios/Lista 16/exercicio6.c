#include <stdio.h>
#include <conio.h>

/*- Criar um Calculador de Tabuadas. O usuário deverá digitar o número desejado e o programa deverá fazer a tabuada desse número de zero a 10.*/

void main(){
	int eu, tab, i;
	
	printf("Esse algoritmo fará a tabuada de 0 a 10 de qualquer numero digitado: ");
	scanf("%d", &eu);

	
	while(i <= 10){

	tab = eu * i;
	printf("%d x %d = %d\n",eu,i,tab);
	i++;
	}
}
