#include <stdio.h>
 
int main() {
 
    int n, fib1=0, fib2=1, fib3, cont=0;
    
    scanf("%d", &n);
    
    while(cont < n){
        fib1 == 0 ? printf("0"):
                    printf(" %d", fib1);
        //fib3 recebe a soma de fib2 com fib1
        fib3 = fib2 + fib1;
        //fib1 recebe o valor de fib2
        fib1 = fib2;
        //fib2 recebe o valor de fib3
        fib2 = fib3;
        cont++;
    }
    printf("\n");

    return 0;
}