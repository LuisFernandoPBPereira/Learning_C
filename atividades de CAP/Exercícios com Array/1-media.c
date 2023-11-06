#include<stdio.h>

double media(double num[], int qtde){
  double media=0;
  
  printf("Agora digite %d valor(es):\n", qtde);
  
  for(int i=0;i<qtde;i++){
    scanf(" %lf",&num[i]);
    media += num[i];
  }
  
  return media / qtde;
}

int main(){
  int qtde;
  double mediaFinal;
  
  printf("Digite a quantidade de numeros para a media:\n");
  scanf("%d", &qtde);
  
  double num[qtde];
  mediaFinal = media(num, qtde);
  
  printf("A media eh: %.2lf\n", mediaFinal);
}