#include<stdio.h>
int calculaFatorial(int n){
  int i, fat=1;

  for(i=1; i<=n; i++){
    fat *= i;
  }
  return fat;
}
int main(){
  int n, res=0;
  
  printf("Digite um numero para calcular o fatorial:\n");
  scanf("%d", &n);
  
  if(n<0){
    printf("O numero deve ser não negativo\n");
  }
  else if(n==0){
    printf("O fatorial de 0 é 1\n");
  }
  else{
    res = calculaFatorial(n);
    printf("O fatorial de %d eh %d\n", n, res);
  }
}
