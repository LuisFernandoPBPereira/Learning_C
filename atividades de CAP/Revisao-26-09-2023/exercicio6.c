/*
    Faça um programa em C que calcula o produto dos números digitados
    pelo usuário. O programa em C deve permitir que o usuário digite
    uma quantidade não determinada de números. O programa em C 
    encerra quando o usuário digita o valor zero.
*/

#include<stdio.h>
main(){
    int num=1, produto=1;
    while(num!=0){
        scanf("%d", &num);
        if(num!=0){
            produto *= num;
        }
    }
    printf("O produto eh: %d\n", produto);
}