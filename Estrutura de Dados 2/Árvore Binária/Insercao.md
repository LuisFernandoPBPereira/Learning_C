<h1 align="center">Inserção de Elementos na Árvore Binária</h1>

<p>
    Para inserirmos um elemento na árvore binária, devemos seguir algumas regras:
</p>

- Elementos menores que a raiz são inseridos à esquerda
- Elementos maiores que a raiz são inseridos à direita
- Elementos iguais à raiz são ignorados

<h3>Inserção</h3>

```C
Node *InserirNode(Node *raiz, int novoValor) {
  if (raiz == NULL) {
    return CriaNode(novoValor);
  }

  if (novoValor < raiz->valor) {
    raiz->esquerda = InserirNode(raiz->esquerda, novoValor);
  }
  if (novoValor > raiz->valor) {
    raiz->direita = InserirNode(raiz->direita, novoValor);
  }

  return raiz;
}
```