/*
    Exercício prático: Crie um código em uma linguagem 
    de alto nível que use uma estrutura condicional 
    if-else para determinar se um número é par ou ímpar
*/

#include<stdio.h>
main(){
    int num;
    scanf("%d", &num);
    if(num%2==0){
        printf("%d eh par\n", num);
    }
    else{
        printf("%d eh impar\n", num);
    }
}