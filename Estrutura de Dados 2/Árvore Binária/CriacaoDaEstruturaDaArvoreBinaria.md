<h1 align="center">Criação da Estrutra da Árvore Binária</h1>

<h3>Struct</h3>

```C
typedef struct node {
  int valor;
  struct node *esquerda;
  struct node *direita;
} Node;
```

<br>

<h3>Criação do Nó</h3>

```C
Node *CriaNode(int valor) {
  Node *novoNode = malloc(sizeof(Node));
  novoNode->valor = valor;
  novoNode->direita = NULL;
  novoNode->esquerda = NULL;

  return novoNode;
}
```