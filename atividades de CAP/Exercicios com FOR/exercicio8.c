#include <stdio.h>
 
int main() {

  int n, fib1=0, fib2=1, fib3, i;
    
    printf("Digite um numero limite para a sequencia de Fibonacci:\n");
    scanf("%d", &n);
    
    for(i=0; i<=n; i++){
      if(fib1>n){
        //Interrompe o for para o n-esimo numero ser o limite
        i=n;
      }
      else{
        printf("%d ", fib1);
        //fib3 recebe a soma de fib2 com fib1
        fib3 = fib2 + fib1;
        //fib1 recebe o valor de fib2
        fib1 = fib2;
        //fib2 recebe o valor de fib3
        fib2 = fib3;
      }
    }
    printf("\n");

  return 0;
}