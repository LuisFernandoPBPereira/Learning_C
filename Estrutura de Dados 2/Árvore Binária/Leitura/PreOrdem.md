<h1 align="center">Leitura Pré Ordem</h1>

<p>As raízes são imprimidas e depois percorridas</p>

<h3>Leitura</h3>

```C
void PreOrdem(Node *raiz) {
  if (raiz == NULL)
    return;

  printf("%d\n", raiz->valor);
  PreOrdem(raiz->esquerda);
  PreOrdem(raiz->direita);
}
```