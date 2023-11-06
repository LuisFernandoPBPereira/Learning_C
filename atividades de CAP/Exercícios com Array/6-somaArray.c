#include<stdio.h>

float soma(float num[], int qtde){
  float soma=0;

  printf("Agora digite %d valor(es):\n", qtde);

  for(int i=0;i<qtde;i++){
    scanf("%f",&num[i]);
    soma += num[i];
  }

  return soma;
}

int main(){
  int qtde;
  float somaFinal;

  printf("Digite a quantidade de numeros para a soma:\n");
  scanf("%d", &qtde);

  float num[qtde];
  somaFinal = soma(num, qtde);

  printf("A soma eh: %.2f\n", somaFinal);
}