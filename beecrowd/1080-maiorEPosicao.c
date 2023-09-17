#include <stdio.h>
 
int main() {
    int n, posicao = 0, maior = 0, cont = 1;

    while(cont <= 100){
        scanf("%d", &n);
        if(n > maior){
            maior = n;
            posicao = cont;
        }
        cont++;
    }
    printf("%d\n", maior);
    printf("%d\n", posicao);    
 
    return 0;
}