#include<stdio.h>
void verificaPrimo(int n){
  int divisores=0, i;

  for(i=1; i<=n; i++){
    if(n%i==0){
      divisores++;
    }
  }
  divisores == 2 ? printf("Verdadeiro\n"):
                   printf("Falso\n");
}
int main(){
  int n;
  printf("Digite um numero para verificar se eh primo:\n");
  scanf("%d", &n);
  verificaPrimo(n);
}