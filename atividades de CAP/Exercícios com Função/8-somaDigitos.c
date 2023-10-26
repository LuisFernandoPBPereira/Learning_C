#include<stdio.h>
int somaDigitos(int n){
  int somaDig=0;

  while(n>0){
    somaDig += n%10;
    n /= 10;
  }
  return somaDig;
}
int main(){
  int n, soma;
  
  printf("Digite um numero:\n");
  scanf("%d", &n);
  
  soma = somaDigitos(n);
  
  printf("A soma dos digitos do numero %d eh %d\n", n, soma);
}