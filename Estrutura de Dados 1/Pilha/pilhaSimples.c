#include <malloc.h>
#include <stdio.h>

typedef struct Node {
  struct Node *node;
  int valor;
} Node;

Node *CriarPilha(int valor) {
  Node *pilha = malloc(sizeof(Node));
  pilha->valor = valor;
  pilha->node = NULL;

  return pilha;
}

void Push(Node *pilha, int valor) {
  Node *novoNode = malloc(sizeof(Node));
  novoNode->valor = valor;

  if (pilha->node != NULL) {
    Push(pilha->node, valor);
  } else {
    pilha->node = novoNode;
    return;
  }

  return;
}

void Pop(Node* anterior, Node *pilha) {
  if (pilha->node != NULL) {
    Pop(pilha, pilha->node);
  } else {
    anterior->node = NULL;
    free(pilha);
    return;
  }

  return;
}

void PrintaPilha(Node *raiz) {
  if (raiz->node == NULL) {
    printf("%d -> TOPO\n", raiz->valor);
  } else {
    printf("%d\n", raiz->valor);
    PrintaPilha(raiz->node);
  }
  return;
}

int main() {
  Node *pilha = CriarPilha(1);
  Push(pilha, 2);
  Push(pilha, 3);
  Push(pilha, 4);
  PrintaPilha(pilha);
  Pop(NULL, pilha);
  printf("\n");
  PrintaPilha(pilha);
}