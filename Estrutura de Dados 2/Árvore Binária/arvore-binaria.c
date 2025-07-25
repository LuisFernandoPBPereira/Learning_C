#include <malloc.h>
#include <stdio.h>

typedef struct Node {
  struct Node *esquerda;
  struct Node *direita;
  int valor;
} Node;

Node *CriaArvore(int valor) {
  Node *novoNode = malloc(sizeof(Node));
  novoNode->valor = valor;
  novoNode->esquerda = NULL;
  novoNode->direita = NULL;
  return novoNode;
}

void InsereNode(Node *raiz, int valor) {
  Node *novoNode = malloc(sizeof(Node));
  novoNode->valor = valor;
  novoNode->direita = NULL;
  novoNode->esquerda = NULL;

  if (valor > raiz->valor) {
    if (raiz->direita != NULL) {
      InsereNode(raiz->direita, valor);
    } else {
      raiz->direita = novoNode;
    }
  } else if (valor < raiz->valor) {
    if (raiz->esquerda != NULL) {
      InsereNode(raiz->esquerda, valor);
    } else {
      raiz->esquerda = novoNode;
    }
  }
}

Node *BuscaNodeMinimo(Node *raiz) {
  if (raiz->esquerda != NULL) {
    raiz = BuscaNodeMinimo(raiz->esquerda);
  }

  return raiz;
}

Node *RemoverNode(Node *raiz, int valor) {
  if (raiz == NULL) return NULL;
  
  if (valor > raiz->valor) {
    raiz->direita = RemoverNode(raiz->direita, valor);
  } else if (valor < raiz->valor) {
    raiz->esquerda = RemoverNode(raiz->esquerda, valor);
  } else {
    if (raiz->esquerda == NULL && raiz->direita == NULL) {
      free(raiz);
      return NULL;
    }
    if (raiz->esquerda == NULL) {
      Node *temp = raiz->direita;
      free(raiz);
      return temp;
    }
    if (raiz->direita == NULL) {
      Node *temp = raiz->esquerda;
      free(raiz);
      return temp;
    }

    Node *nodeMinimo = BuscaNodeMinimo(raiz->direita);
    raiz->valor = nodeMinimo->valor;
    raiz->direita = RemoverNode(raiz->direita, nodeMinimo->valor);
  }
  return raiz;
}

void PrintaArvore(Node *arvore) {
  if (arvore == NULL) {
    return;
  }

  PrintaArvore(arvore->esquerda);
  printf("%d\n", arvore->valor);
  PrintaArvore(arvore->direita);
}

int main() {
  Node *arvore = CriaArvore(9);
  InsereNode(arvore, 43);
  InsereNode(arvore, 90);
  InsereNode(arvore, 87);
  InsereNode(arvore, 88);
  InsereNode(arvore, 234);

  PrintaArvore(arvore);

  printf("\n");

  arvore = RemoverNode(arvore, 88);
  PrintaArvore(arvore);
}