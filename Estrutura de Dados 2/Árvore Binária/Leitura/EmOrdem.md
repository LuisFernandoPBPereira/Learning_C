<h1 align="center">Leitura Em Ordem</h1>

<p>
    Os nós são lidos e imprimidos em ordem crescente.
</p>

<h3>Leitura</h3>

```C
void EmOrdem(Node *raiz) {
  if (raiz == NULL)
    return;

  EmOrdem(raiz->esquerda);
  printf("%d\n", raiz->valor);
  EmOrdem(raiz->direita);
}
```