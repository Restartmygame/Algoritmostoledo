#include <stdio.h>
#include <conio.h>

/*9.	Escreva um algoritmo para calcular o fatorial do número N, cujo valor é obtido através do usuário pelo teclado.
     Exemplo:
     Fatorial = (N * N..N-1)
     4 * 1 = 4
     4 * 2 = 8
     8 * 3 = 24  - resultado
*/

void main(){
     
    
   
   int fat, n;
       printf("Insira um valor para o qual deseja calcular seu fatorial: ");
       scanf("%d", &n);

       for(fat = 1; n > 1; n = n - 1){
               fat = fat * n;
       }

       printf("\nFatorial calculado: %d\n", fat);
       
       system("pause");
       return 0;

     
}
