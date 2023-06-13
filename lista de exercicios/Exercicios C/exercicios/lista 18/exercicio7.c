#include <stdio.h>
#include <conio.h>

/*7.	Criar um algoritmo em que leia dez números inteiros e imprima o maior e o menor número da lista. */

void main(){
     
     int i, num, maior, menor;
     
     printf("digite apenas numeros inteiros!!!\n");
     
     for(i=1;i<=10;i++){
            printf("Digite o %do numero: ", i);
            scanf("%d",&num);
            
            if(i == 1){
                 maior = num;
                 menor = num;
            }else{
                  if(num > maior){
                         maior = num;
                  }
                  
                  if(num < menor){
                         menor = num;
                  }     
             }
            
            0
     }
     
     printf("O maior numero eh o numero %d !!\n", maior);
     printf("O menor numero eh o numero %d !!\n", menor);
     
     system("pause");
     
     return 0;
}
