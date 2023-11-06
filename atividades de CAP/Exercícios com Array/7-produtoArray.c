#include<stdio.h>

int produto(int num[], int qtde){
  int produto=1;

  printf("Agora digite %d valor(es):\n", qtde);

  for(int i=0;i<qtde;i++){
    scanf("%d",&num[i]);
    produto *= num[i];
  }

  return produto;
}

int main(){
  int qtde;
  int produtoFinal;

  printf("Digite a quantidade de numeros para o produto:\n");
  scanf("%d", &qtde);

  int num[qtde];
  produtoFinal = produto(num, qtde);

  printf("O produto dos valores eh: %d\n", produtoFinal);
}