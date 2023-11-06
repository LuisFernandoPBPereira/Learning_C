#include<stdio.h>

int menorNum(int num[], int qtde){
  int menor;
  
  printf("Agora digite %d valor(es):\n", qtde);
  
  for(int i=0;i<qtde;i++){
    scanf("%d",&num[i]);
    if(i==0){
      menor = num[i];
    }
    if(num[i] < menor){
      menor = num[i];
    }
  }
  
  return menor;
}

int main(){
  int qtde, res;
  
  printf("Digite a quantidade de numeros para selecionar o menor:\n");
  scanf("%d", &qtde);
  
  int num[qtde];
  res = menorNum(num, qtde);
  
  printf("O menor numero eh: %d\n", res);
}