#include<stdio.h>
int somaPares(int n){
  int i, pares=0;

  for(i=1; i<=n; i++){
    i % 2 == 0 ? pares += i : pares;
  }
  return pares;
}
int main(){
  int n, soma=0;
  
  printf("Digite um numero para calcular todos os pares:\n");
  scanf("%d", &n);
  
  soma = somaPares(n);
  
  printf("A soma dos numeros pares ate %d eh %d\n", n, soma);
}