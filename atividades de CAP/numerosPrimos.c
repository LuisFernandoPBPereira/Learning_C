/*
    ---------------------- PARA A PROVA -----------------------------
*/

#include <stdio.h>
 
int main() {

    /*
      num       : é a variável que põe limite à quantidade de números primos
                  a se calcular.
      cont      : variável contadora, auxilia na contagem dos números primos
                  e também é responsável por mostrá-los
      aux       : variável que auxilia na operação do resto da divisão, sendo
                  incrementada a cada repetição para verificar a quantidade de
                  divisores.
      divisores : variável que armazena a quantidade de divisores de determinado
                  número, ao chegar no número 2, ela reseta ao valor original para
                  compararmos um próximo número primo.
    */
    int num, cont = 0, aux, divisores;

    scanf("%d", &num);
    //Enquanto o contador for menor que o número informado:
    while(cont < num){
      divisores=0;
      aux=1;
      //Enquanto a variável auxiliar for menor ou igual ao contador:
      while(aux <= cont){
        /*Se o resto da divisão do contador pela variável auxiliar
          for igual à zero, "divisores" será incrementada*/
        if(cont % aux == 0){
          divisores++;
        }
        //"aux" é incrementada para realizarmos outro resto da divisão
        aux++;
      }
      if(divisores == 2)
        printf("%d eh primo\n", cont);
      
      cont++;
    }
 
    return 0;
}