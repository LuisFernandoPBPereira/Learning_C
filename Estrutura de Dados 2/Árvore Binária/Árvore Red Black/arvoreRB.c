#include <stdio.h>
#include <stdlib.h>

enum Cor { VERMELHO, PRETO };

typedef struct Node {
    int valor;
    enum Cor cor;
    struct Node *esquerda, *direita, *pai;
} Node;

typedef struct {
    Node *raiz;
} ArvoreRB;

Node* criarNode(int valor) {
    Node *novoNode = (Node*) malloc(sizeof(Node));
    novoNode->valor = valor;
    novoNode->cor = VERMELHO;
    novoNode->esquerda = novoNode->direita = novoNode->pai = NULL;
    return novoNode;
}

void rotacaoEsquerda(ArvoreRB *arvore, Node *nodeAtual) {
    Node *nodeDireita = nodeAtual->direita;
    nodeAtual->direita = nodeDireita->esquerda;

    if (nodeDireita->esquerda != NULL) {
        nodeDireita->esquerda->pai = nodeAtual;
    }

    nodeDireita->pai = nodeAtual->pai;

    if (nodeAtual->pai == NULL) {
        arvore->raiz = nodeDireita;
    } else if (nodeAtual == nodeAtual->pai->esquerda) {
        nodeAtual->pai->esquerda = nodeDireita;
    } else {
        nodeAtual->pai->direita = nodeDireita;
    }

    nodeDireita->esquerda = nodeAtual;
    nodeAtual->pai = nodeDireita;
}

void rotacaoDireita(ArvoreRB *arvore, Node *nodeAtual) {
    Node *nodoEsquerda = nodeAtual->esquerda;
    nodeAtual->esquerda = nodoEsquerda->direita;

    if (nodoEsquerda->direita != NULL) {
        nodoEsquerda->direita->pai = nodeAtual;
    }

    nodoEsquerda->pai = nodeAtual->pai;

    if (nodeAtual->pai == NULL) {
        arvore->raiz = nodoEsquerda;
    } else if (nodeAtual == nodeAtual->pai->direita) {
        nodeAtual->pai->direita = nodoEsquerda;
    } else {
        nodeAtual->pai->esquerda = nodoEsquerda;
    }

    nodoEsquerda->direita = nodeAtual;
    nodeAtual->pai = nodoEsquerda;
}

void corrigirInsercao(ArvoreRB *arvore, Node *nodeInserido) {
    while (nodeInserido != arvore->raiz && nodeInserido->pai->cor == VERMELHO) {
        if (nodeInserido->pai == nodeInserido->pai->pai->esquerda) {
            Node *nodeTio = nodeInserido->pai->pai->direita;

            if (nodeTio != NULL && nodeTio->cor == VERMELHO) {
                nodeInserido->pai->cor = PRETO;
                nodeTio->cor = PRETO;
                nodeInserido->pai->pai->cor = VERMELHO;
                nodeInserido = nodeInserido->pai->pai;
            } else {
                if (nodeInserido == nodeInserido->pai->direita) {
                    nodeInserido = nodeInserido->pai;
                    rotacaoEsquerda(arvore, nodeInserido);
                }
                nodeInserido->pai->cor = PRETO;
                nodeInserido->pai->pai->cor = VERMELHO;
                rotacaoDireita(arvore, nodeInserido->pai->pai);
            }
        } else {
            Node *nodeTio = nodeInserido->pai->pai->esquerda;

            if (nodeTio != NULL && nodeTio->cor == VERMELHO) {
                nodeInserido->pai->cor = PRETO;
                nodeTio->cor = PRETO;
                nodeInserido->pai->pai->cor = VERMELHO;
                nodeInserido = nodeInserido->pai->pai;
            } else {
                if (nodeInserido == nodeInserido->pai->esquerda) {
                    nodeInserido = nodeInserido->pai;
                    rotacaoDireita(arvore, nodeInserido);
                }
                nodeInserido->pai->cor = PRETO;
                nodeInserido->pai->pai->cor = VERMELHO;
                rotacaoEsquerda(arvore, nodeInserido->pai->pai);
            }
        }
    }
    arvore->raiz->cor = PRETO;
}

void inserir(ArvoreRB *arvore, int valor) {
    Node *novoNode = criarNode(valor);
    Node *nodePai = NULL;
    Node *nodeAtual = arvore->raiz;

    while (nodeAtual != NULL) {
        nodePai = nodeAtual;
        if (novoNode->valor < nodeAtual->valor) {
            nodeAtual = nodeAtual->esquerda;
        } else {
            nodeAtual = nodeAtual->direita;
        }
    }

    novoNode->pai = nodePai;

    if (nodePai == NULL) {
        arvore->raiz = novoNode;
    } else if (novoNode->valor < nodePai->valor) {
        nodePai->esquerda = novoNode;
    } else {
        nodePai->direita = novoNode;
    }

    corrigirInsercao(arvore, novoNode);
}

void impressaoEmOrdem(Node *raiz) {
    if (raiz != NULL) {
        impressaoEmOrdem(raiz->esquerda);
        printf("Valor: %d -  Cor: %s\n", raiz->valor, raiz->cor == 0 ? "Vermelho" : "Preto");
        impressaoEmOrdem(raiz->direita);
    }
}

int main() {
    ArvoreRB arvore;
    arvore.raiz = NULL;

    inserir(&arvore, 10);
    inserir(&arvore, 20);
    inserir(&arvore, 30);
    inserir(&arvore, 40);
    inserir(&arvore, 50);

    printf("Percurso em ordem: \n");
    impressaoEmOrdem(arvore.raiz);
    printf("\n");

    return 0;
}
