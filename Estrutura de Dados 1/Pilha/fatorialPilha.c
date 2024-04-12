#include <malloc.h>
#include <stdio.h>

typedef struct no {
  int valor;
  struct no *proximo;
} No;

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