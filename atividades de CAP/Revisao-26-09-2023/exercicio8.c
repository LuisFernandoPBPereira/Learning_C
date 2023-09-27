/*
     Escreva um programa em C que gera números entre 
     1000 e 1999 e mostra aqueles que divididos por 11 dão resto 5
*/


#include<stdio.h>
main(){
    int i;
    for(i=1000; i<1999; i++){
        if(i%11==5){
            printf("%d eh divisivel por 11 e o resto eh 5\n", i);
        }
    }
}