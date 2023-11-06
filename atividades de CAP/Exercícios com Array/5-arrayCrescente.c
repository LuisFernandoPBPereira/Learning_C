#include<stdio.h>

void crescente(int num[], int qtde){
  num[qtde];
  printf("Digite %d valor(es)\n", qtde);
  for(int i = 0; i < qtde; i++){
     scanf("%d", &num[i]); 
  }
  printf("\n");
  for (int i = 0; i < qtde; i++)
  {
    for (int j = i; j < qtde; j++)
    {
      if (num[i] > num[j])
      {
          int aux = num[i];
          num[i] = num[j];
          num[j] = aux;
      }
    }
    printf("%d ", num[i]);
  }
}


int main(){
  int qtde;
  
  printf("Digite a quantidade de numeros para ordena-los de forma crescente:\n");
  scanf("%d", &qtde);
  
  int num[qtde];
  crescente(num, qtde);
}