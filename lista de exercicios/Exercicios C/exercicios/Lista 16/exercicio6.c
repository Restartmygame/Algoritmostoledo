#include <stdio.h>
#include <conio.h>

/*- Criar um Calculador de Tabuadas. O usu�rio dever� digitar o n�mero desejado e o programa dever� fazer a tabuada desse n�mero de zero a 10.*/

void main(){
	int eu, tab, i;
	
	printf("Esse algoritmo far� a tabuada de 0 a 10 de qualquer numero digitado: ");
	scanf("%d", &eu);

	
	while(i <= 10){

	tab = eu * i;
	printf("%d x %d = %d\n",eu,i,tab);
	i++;
	}
}
