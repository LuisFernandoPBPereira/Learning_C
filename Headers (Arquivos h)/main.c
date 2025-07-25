#include <stdio.h>
#include <malloc.h>
#include "fatorialPilha.h"

int fatorial(int num) {
  No *pilha = NULL;
  while (num > 1) {
    pilha = empilhar(pilha, num);
    num--;
  }

  imprimirPilha(pilha);

  while (pilha != NULL) {
    No *remover = desempilhar(&pilha);
    num = num * remover->valor;
    free(remover);
  }

  return num;
}

int main() {
  int num;

  printf("Digite um número: \n");
  scanf("%d", &num);

  printf("\nO fatorial de %d é %d\n", num, fatorial(num));

}