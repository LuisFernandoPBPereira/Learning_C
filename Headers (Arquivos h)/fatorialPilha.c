#include <malloc.h>
#include <stdio.h>
#include "fatorialPilha.h"


No *empilhar(No *pilha, int num) {
  No *novoItem = malloc(sizeof(No));

  if (novoItem != NULL) {
    novoItem->valor = num;
    novoItem->proximo = pilha;

    return novoItem;
  } else {
    printf("Erro ao alocar memória...\n");
  }
  return NULL;
}

No *desempilhar(No **pilha) {
  No *remover = NULL;

  if (*pilha != NULL) {
    remover = *pilha;
    *pilha = remover->proximo;
  } else {
    printf("\nPilha vazia\n");
  }

  return remover;
}

void imprimirPilha(No *pilha) {
  printf("------ PILHA ------\n\n");
  while (pilha != NULL) {
    printf("\t\t%d\n", pilha->valor);
    pilha = pilha->proximo;
  }
  printf("\n-- FIM DA PIILHA --\n");
}

