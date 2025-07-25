#include <malloc.h>
#include <stdio.h>

typedef struct Node {
  struct Node *node;
  int valor;
} Node;

Node* CriarLista(int valorInicial){
  Node* lista = malloc(sizeof(Node));
  lista->valor = valorInicial;

  return lista;
}

void InserirNode(Node *raiz, int valor) {
  Node *novoNode = malloc(sizeof(Node));
  novoNode->valor = valor;

  if (raiz->node != NULL) {
    InserirNode(raiz->node, valor);
  } else {
    raiz->node = novoNode;
    return;
  }
}

Node* InserirNoComeco(Node* lista, int valor){
  Node* novoNode = malloc(sizeof(Node));
  novoNode->valor = valor;
  novoNode->node = lista;

  return novoNode;
}

void InserirNoMeio(Node* atual, int novoValor, int valoReferencia){
  Node* novoNode = malloc(sizeof(Node));
  novoNode->valor = novoValor;

  if (atual->valor == valoReferencia){
    if (atual->node == NULL){
      atual->node = novoNode;
    }
    else{
      Node* temp = atual->node;
      atual->node = novoNode;
      novoNode->node = temp;
    }
  }
  else{
    InserirNoMeio(atual->node, novoValor, valoReferencia);
  }
}

void PrintaLista(Node *raiz) {
  if (raiz == NULL){
    printf("Lista vazia\n");
  }

  printf("%d\n", raiz->valor);

  if (raiz->node != NULL) {
    PrintaLista(raiz->node);
  }

  return;
}

Node* RemoverItemDaLista(Node* atual, int valorParaRemover){

  if (atual == NULL){
    return NULL;
  } 

  if (atual->valor == valorParaRemover) {
    Node* temp = atual->node;
    free(atual);
    return temp;
  }

  if (atual->node != NULL) {
    atual->node = RemoverItemDaLista(atual->node, valorParaRemover);
  }
  return atual;
}

int Length(Node* lista){
  int contador = 0;
  Node* temp = lista;
  while(temp != NULL){
    temp = temp->node;
    contador++;
  }

  return contador;
}

int main() { 
  Node *lista = CriarLista(10); 
  InserirNode(lista, 8);
  InserirNode(lista, 2);
  InserirNode(lista, 5);
  InserirNode(lista, 9);
  PrintaLista(lista);
  lista = RemoverItemDaLista(lista, 5);
  printf("\n");
  PrintaLista(lista);
  lista = InserirNoComeco(lista, 100);
  printf("\n");
  PrintaLista(lista);
  printf("\nTamanho: %d\n", Length(lista));
  printf("\n");
  InserirNoMeio(lista, 200, 2);
  PrintaLista(lista);
  printf("\n");
  InserirNoMeio(lista, 300, 9);
  PrintaLista(lista);
  printf("\nTamanho: %d\n", Length(lista));
}