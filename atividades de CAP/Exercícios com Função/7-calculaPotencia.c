#include<stdio.h>
int calculaPotencia(int base, int expo){
  int i, res=1;

  for(i=1; i<=expo; i++){
    res *= base;
  }
  return res;
}
int main(){
  int base, expo, res=0;
  
  printf("Digite um numero base:\n");
  scanf("%d", &base);
  printf("Digite um numero expoente:\n");
  scanf("%d", &expo);

  res = calculaPotencia(base, expo);
  
  if(base == 0 && expo == 0){
    printf("Indeterminacao\n");
  }
  else if(base == 0 && expo != 0){
    printf("O resultado de %d^%d eh 0\n", base, expo);
  }
  else if(base != 0 && expo == 0){
    printf("O resultado de %d^%d eh 1\n", base, expo);
  }
  else{
    printf("O resultado de %d^%d eh: %d\n", base, expo, res);
  }
}
