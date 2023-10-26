#include<stdio.h>
int ehPar(int n){
  return (n%2==0 ? 1 : 0);
}
int main(){
  int n;
  printf("Digite um numero par:");
  scanf("%d", &n);
  if(ehPar(n)){
    printf("Verdadeiro\n");
  }
  else{
    printf("Falso\n");
  }
}