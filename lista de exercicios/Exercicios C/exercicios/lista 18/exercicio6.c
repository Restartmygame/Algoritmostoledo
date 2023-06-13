#include <stdio.h>
#include <conio.h>

/*6.	Criar um algoritmo em que leia 4 números inteiros e imprima o maior e o segundo maior número da lista. */

void main(){
     
     int i, num, maior, segundo_maior;
     
     for(i=1;i<=4;i++){
             printf("\nDigite apenas numeros inteiro!!\n");
             printf("Digite o %do numero: ", i);
             scanf("%d",&num);
     
             if(i == 1){
                  maior = num;
                  segundo_maior = num;
             }
             else{
                  if(num < maior && num > segundo_maior){
                         segundo_maior = num;
                  }
                  
                  if(num > maior){
                         segundo_maior = maior;
                         maior = num;
                  }
             }
             
     
     }
     
     printf("\no maior numero eh o numero %d\n",maior);
     printf("o segundo maior numero eh o numero %d\n",segundo_maior);
     
     system("pause");
    
    return 0;
     
}
