#include<stdio.h>
void calculaFibonacci(int n){
  int fib1=0, fib2=1, fib3, i;

  for(i=0; i<=n; i++){
    if(fib1>n){
      i=n;
    }
    else{
      printf("%d ", fib1);
      fib3 = fib2 + fib1;
      fib1 = fib2;
      fib2 = fib3;
    }
  }
  printf("\n");
}
int main(){
  int n;
  printf("Digite um numero limite para a sequencia de Fibonacci:\n");
  scanf("%d", &n);
  calculaFibonacci(n);
}
