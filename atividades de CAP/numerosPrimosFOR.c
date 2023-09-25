/*
    ---------------------- PARA A PROVA -----------------------------
*/

#include <stdio.h>
 
int main() {

    /*
      num       : é a variável que põe limite à quantidade de números primos
                  a se calcular.
                  
      i         : variável contadora do primeiro FOR, faz com que percorra os
                  números até o limite estabelecido por "num", e também auxilia
                  na verificação do resto da divisão.
                  
      cont      : variável contadora, auxilia no resto da divisão.
      
      divisores : variável que armazena a quantidade de divisores de determinado
                  número, ao chegar no número 2, ela reseta ao valor original para
                  compararmos um próximo número primo.
    */
    int num, i, cont, divisores;

    scanf("%d", &num);
    //FOR irá executar enquanto "i" for menor que "num"
    for(i=0; i < num; i++){
      divisores=0;
      //FOR irá executar enquanto "cont" for menor ou igual a "i".
      for(cont=1; cont <= i; cont++){
        //Se o resto da divisão de "i" por "cont" for 0:
        if(i % cont == 0){
          divisores++;
        }        
      }
      if(divisores == 2)
        printf("%d eh primo\n", i);        
    }
 
    return 0;
}