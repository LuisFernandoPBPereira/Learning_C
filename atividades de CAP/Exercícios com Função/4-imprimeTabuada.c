#include<stdio.h>
void imprimeTabuada(int n){
  int i;

  for(i=1; i<=10; i++){
    printf("%d X %d = %d\n", n, i, n*i);
  }
}
int main(){
  int n;
  printf("Digite um numero para montar a tabuada:\n");
  scanf("%d", &n);
  imprimeTabuada(n);
}