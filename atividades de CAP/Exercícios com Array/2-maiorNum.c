#include<stdio.h>

int maiorNum(int num[], int qtde){
  int maior = 0;
  
  printf("Agora digite %d valor(es):\n", qtde);
  
  for(int i=0;i<qtde;i++){
    scanf("%d",&num[i]);
    if(num[i] > maior){
      maior = num[i];
    }
  }
  
  return maior;
}

int main(){
  int qtde, res;
  
  printf("Digite a quantidade de numeros para selecionar o maior:\n");
  scanf("%d", &qtde);
  
  int num[qtde];
  res = maiorNum(num, qtde);
  
  printf("O maior numero eh: %d\n", res);
}