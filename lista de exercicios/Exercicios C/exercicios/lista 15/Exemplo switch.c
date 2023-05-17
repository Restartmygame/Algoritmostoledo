#include <stdio.h>
#include <conio.h>

/**/

void main(){
	int num;
	printf("Informe um numero de 0 a 3: ");
	scanf("%d", &num);
	switch (num){
		case 1:
			printf("Um");
			break;
		case 2:
			printf("dois");
			break;
		case 3:
			printf("três");
			break;
		case 0:
			printf("Zero");
			break;
		default:
			printf("Inválido");
	}
}
