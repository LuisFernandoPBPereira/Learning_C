/*
    .Crie um código em uma linguagem de alto nível que use uma estrutura 
    condicional switch para determinar o dia da semana de um número inteiro.
    Exercício:
    • Crie um código em C que recebe um número inteiro como entrada do usuário.
    • Use uma estrutura condicional switch para determinar o dia da semana do 
    número.
    • Imprima uma mensagem informando o dia da semana.
*/

#include<stdio.h>
main(){
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero incorreto\n");
    }
}