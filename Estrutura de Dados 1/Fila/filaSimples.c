#include <malloc.h>
#include <stdio.h>

typedef struct Node {
  struct Node *node;
  int valor;
} Node;

Node *CriarFila(int valor) {
  Node *novoNode = malloc(sizeof(Node));
  novoNode->valor = valor;
  novoNode->node = NULL;
  return novoNode;
}

Node *Enqueue(Node *fila, int valor) {
  Node *novoNode = malloc(sizeof(Node));
  novoNode->valor = valor;

  novoNode->node = fila;
  return novoNode;
}

void Dequeue(Node *anterior, Node *atual) {
  if (atual->node != NULL) {
    Dequeue(atual, atual->node);
  } else {
    anterior->node = NULL;
    free(atual);
  }
}

void PrintaFila(Node *raiz) {
  if (raiz->node == NULL) {
    printf("%d -> COMEÇO\n", raiz->valor);
  } else {
    printf("%d\n", raiz->valor);
    PrintaFila(raiz->node);
  }
  return;
}

int main() {
  Node *fila = CriarFila(1);
  fila = Enqueue(fila, 2);
  fila = Enqueue(fila, 3);
  fila = Enqueue(fila, 4);
  PrintaFila(fila);
  Dequeue(NULL, fila);
  printf("\n");
  PrintaFila(fila);
}