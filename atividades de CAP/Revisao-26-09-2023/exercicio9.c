/*
     Faça um programa que leia vários conjuntos de três 
     valores reais e mostre para cada conjunto: sua soma,
     seu produto e sua média. O programa para quando um conjunto 
    não entrar com seus valores em ordem crescente
*/

#include<stdio.h>
main(){
    float a=0, b=0, c=0, media, soma, produto;
    while(!(a>b&&b>c)){
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
        if(!(a>b&&b>c)){
            media= (a+b+c)/3;
            produto = a*b*c;
            soma=a+b+c;
            printf("a soma eh: %.1f\n", soma);
            printf("a media eh: %.1f\n", media);
            printf("o produto eh: %.1f\n", produto);
        }
    }
}