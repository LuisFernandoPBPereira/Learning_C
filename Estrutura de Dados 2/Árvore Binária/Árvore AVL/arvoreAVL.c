#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node* esquerda;
    struct Node* direita;
    int altura;
} Node;

int alturaDoNode(Node* node) {
    if (node == NULL)
        return 0;
    return node->altura;
}

int valorMaximoEntreDoisNodes(int valor1, int valor2) {
    return (valor1 > valor2) ? valor1 : valor2;
}

Node* novoNode(int valor) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->valor = valor;
    newNode->esquerda = NULL;
    newNode->direita = NULL;
    newNode->altura = 1; 
    return newNode;
}

Node* rotacionarParaDireita(Node* nodeDesbalanceado) {
    Node* subarvoreEsquerda = nodeDesbalanceado->esquerda;
    Node* subarvoreDireitaDaEsquerda = subarvoreEsquerda->direita;

    // ================== ROTAÇÃO =======================
    subarvoreEsquerda->direita = nodeDesbalanceado;
    nodeDesbalanceado->esquerda = subarvoreDireitaDaEsquerda;
    // ==================================================
    
    //  ================ ATUALIZA A ALTURA DOS NÓS ========================
    nodeDesbalanceado->altura = valorMaximoEntreDoisNodes(alturaDoNode(nodeDesbalanceado->esquerda), alturaDoNode(nodeDesbalanceado->direita)) + 1;
    subarvoreEsquerda->altura = valorMaximoEntreDoisNodes(alturaDoNode(subarvoreEsquerda->esquerda), alturaDoNode(subarvoreEsquerda->direita)) + 1;
    // ====================================================================

    return subarvoreEsquerda;
}

Node* rotacionarParaEsquerda(Node* nodeDesbalanceado) {
    Node* subarvoreDireita = nodeDesbalanceado->direita;
    Node* subarvoreEsquerdaDaDireita = subarvoreDireita->esquerda;

    // ================ ROTAÇÃO ===================
    subarvoreDireita->esquerda = nodeDesbalanceado;
    nodeDesbalanceado->direita = subarvoreEsquerdaDaDireita;
    // ============================================

    // ======================== ATUALIZA A ALTURA DOS NÓS =======================
    nodeDesbalanceado->altura = valorMaximoEntreDoisNodes(alturaDoNode(nodeDesbalanceado->esquerda), alturaDoNode(nodeDesbalanceado->direita)) + 1;
    subarvoreDireita->altura = valorMaximoEntreDoisNodes(alturaDoNode(subarvoreDireita->esquerda), alturaDoNode(subarvoreDireita->direita)) + 1;
    // ==========================================================================

    return subarvoreDireita;
}

// Função para obter o fator de balanceamento de um nó
int getFatorDeBalanceamento(Node* node) {
    if (node == NULL)
        return 0;
    return alturaDoNode(node->esquerda) - alturaDoNode(node->direita);
}

Node* inserirNode(Node* raiz, int valor) {
    // Inserção padrão na árvore binária de busca
    if (raiz == NULL)
        return novoNode(valor);

    if (valor < raiz->valor)
        raiz->esquerda = inserirNode(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = inserirNode(raiz->direita, valor);
    else
        return raiz;

    raiz->altura = 1 + valorMaximoEntreDoisNodes(alturaDoNode(raiz->esquerda), alturaDoNode(raiz->direita));

    int fatorDeBalanceamento = getFatorDeBalanceamento(raiz);

    // Casos de desbalanceamento
    // Caso Esquerda-Esquerda
    if (fatorDeBalanceamento > 1 && valor < raiz->esquerda->valor)
        return rotacionarParaDireita(raiz);

    // Caso Direita-Direita
    if (fatorDeBalanceamento < -1 && valor > raiz->direita->valor)
        return rotacionarParaEsquerda(raiz);

    // Caso Esquerda-Direita
    if (fatorDeBalanceamento > 1 && valor > raiz->esquerda->valor) {
        raiz->esquerda = rotacionarParaEsquerda(raiz->esquerda);
        return rotacionarParaDireita(raiz);
    }

    // Caso Direita-Esquerda
    if (fatorDeBalanceamento < -1 && valor < raiz->direita->valor) {
        raiz->direita = rotacionarParaDireita(raiz->direita);
        return rotacionarParaEsquerda(raiz);
    }

    return raiz; // Retorna o nó (sem mudança se balanceado)
}

// Função para imprimir a árvore em pré-ordem
void imprimirEmOrdem(Node* raiz) {
    if (raiz != NULL) {
        imprimirEmOrdem(raiz->esquerda);
        printf("%d \n", raiz->valor);
        imprimirEmOrdem(raiz->direita);
    }
}

int main() {
    Node* raiz = NULL;

    raiz = inserirNode(raiz, 10);
    raiz = inserirNode(raiz, 20);
    raiz = inserirNode(raiz, 30);
    raiz = inserirNode(raiz, 40);
    raiz = inserirNode(raiz, 50);
    raiz = inserirNode(raiz, 25);

    printf("Árvore AVL em ordem:\n");
    imprimirEmOrdem(raiz);

    return 0;
}
