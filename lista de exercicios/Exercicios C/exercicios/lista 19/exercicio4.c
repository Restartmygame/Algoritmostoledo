#include <stdio.h>
#include <conio.h>

/*4.	Um cinema possui capacidade de 6 lugares e está sempre com ocupação total.
Certo dia, cada espectador respondeu a um questionário, no qual constava, 
sua idade e sua opinião em relação ao filme, sendo
o	Nota 		Significado
o	1 		Ótimo
o	2 		Bom
o	3 		Regular
o	4 		Ruim
o	5 		Péssimo
Elabore um algoritmo que, lendo estes dados, calcule e imprima:
- A quantidade de respostas ótimo; ok
- A diferença percentual entre respostas bom e regular; ok
- A média de idade das pessoas que responderam ruim; ok
- A percentagem de respostas péssimo e a maior idade que utilizou esta opção; ok
- A diferença de idade entre a maior idade que respondeu ótimo e a maior idade 
que respondeu ruim.
*/

int main(){
     
     int idade, i=0, nota, ava_1=0, ava_2=0, ava_3=0, ava_4=0, ava_5=0, soma_idade_ruim=0, 
     maior_idade_pessimo=0, maior_idade_otimo=0, diferenca_oti_pes;
     float percent_bom, percent_regular, diferenc_percent, media_idade_ruim, percent_pessimo;
     
     	while(i<6){
            printf("que nota voce da ao filme\n");
            printf("1 = Otimo\n");
            printf("2 = Bom\n");
            printf("3 = Regular\n");
            printf("4 = Ruim\n");
            printf("5 = Pessimo\n");
            scanf("%d",&nota);
            
            
            
          
            switch(nota){
            
                         case 1:
                              
                              ava_1++;
                              i++;
                                printf("Digite sua idade: ");
                                scanf("%d",&idade);
                                printf("Nota e idade registrada com sucesso!\n");
                              
                               // A maior idade que respondeu otimo
                              if(ava_1 == 1){
                                       maior_idade_otimo = idade;
                              }
                              else{
                                   if(idade > maior_idade_otimo){
                                            maior_idade_otimo = idade;
                                      
                                   }
                              }
                         
                              break;
                         case 2:
                              
                              ava_2++;
                              i++;
                                  printf("Digite sua idade: ");
                                  scanf("%d",&idade);
                                  printf("Nota e idade registrada com sucesso!\n");
                              break;
                         case 3:
                              
                              ava_3++;
                              i++;
                                  printf("Digite sua idade: ");
                                  scanf("%d",&idade);
                                  printf("Nota e idade registrada com sucesso!\n");
                              break;
                         case 4:
                              
                              ava_4++;
                              i++;
                               printf("Digite sua idade: ");
                               scanf("%d",&idade);
                               soma_idade_ruim = soma_idade_ruim + idade;
                               printf("Nota e idade registrada com sucesso!\n");
                              break;
                         case 5:
                              
                              ava_5++;
                              i++;
                                  printf("Digite sua idade: ");
                                  scanf("%d",&idade);
                                  printf("Nota e idade registrada com sucesso!\n");
                              
                              // A maior idade que respondeu pessimo
                              if(ava_5 == 1){
                                       maior_idade_pessimo = idade;
                              }
                              else{
                                   if(idade > maior_idade_pessimo){
                                            maior_idade_pessimo = idade;
                                      
                                   }
                              }
                              
                              
                              
                              break;
                         default:
                                 printf("nota invalida\n");
                                 break;
            }
            
            
                             
      } 
      
      
      //Media da idade das pessoas que responderam ruim
      media_idade_ruim = (float)soma_idade_ruim / i;
      
      printf("\n\nA media da idade das pessoas que responderam ruim eh de %0.0f anos\n\n", media_idade_ruim);
      
      
      printf("%d pessoas disseram que acharam o filme otimo!\n\n",ava_1);
      
      
      
      //calculo da diferença percentual entre as respostas bom e regular
                percent_bom = ((float)ava_2 / i) * 100;
                percent_regular = ((float)ava_3 / i) * 100;
                diferenc_percent = percent_bom - percent_regular;
      
                printf("A diferença percentual entre pessoas que responderam bom e regular eh\n");
                printf("%0.2f%%\n\n", diferenc_percent);
      
      //caluclo da percentagem de pessoas que responderam pessimo
                percent_pessimo = ((float)ava_5 / i) * 100;
      
      //exibição da percentagem de pessoas que responderam pessimo
                 printf("%f%% das pessoas responderam pessimo\n", percent_pessimo);
      
      //exibição da maior idade que respondeu pessimo
                 printf("A pessoa mais velha que respondeu pessimo tem %d anos\n", maior_idade_pessimo);
      
      //diferença de idades otimo e pessimo
                  diferenca_oti_pes = maior_idade_otimo - maior_idade_pessimo;
                  printf("A diferença de idade entre a pessoa mais velha que respondeu otimo e a pessoa\n");
                  printf("mais velha que respondeu pessimo eh %d !!\n", diferenca_oti_pes);
     

      system("pause");
    
      return 0;

}
