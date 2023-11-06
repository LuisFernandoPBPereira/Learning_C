#include<stdio.h>

void inversao(int num[], int qtde){
  int invertido[qtde];
  int cont=0;
  
  printf("Agora digite %d valor(es):\n", qtde);
  
  for(int i=0;i<qtde;i++){
    scanf("%d",&num[i]);
  }
  
  printf("Os valores invertidos sao:\n");
  for(int i=0, j = qtde-1; i<qtde && j >= 0; i++, j--) {
      invertido[i] = num[j];
      printf("%d\n", invertido[i]);
  }
}

int main(){
  int qtde;
  
  printf("Digite a quantidade de numeros para inverte-los:\n");
  scanf("%d", &qtde);
  
  int num[qtde];
  inversao(num, qtde);
}