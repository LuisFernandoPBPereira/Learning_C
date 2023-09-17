#include <stdio.h>
 
int main() {
 
    int x, n, cont = 0, aux=1, divisores;

    scanf("%d", &n);

    while(cont < n){
        scanf("%d", &x);
        divisores=0;
        aux=1;
        while(aux <= x){
            if(x % aux == 0){
            divisores++;
            }
            aux++;
        }
        divisores == 2 ? printf("%d eh primo\n", x):
                         printf("%d nao eh primo\n", x);
        cont++;
    }
 
    return 0;
}