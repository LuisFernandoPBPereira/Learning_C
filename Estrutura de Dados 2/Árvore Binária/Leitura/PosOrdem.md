<h1 align="center">Leitura Pós Ordem</h1>

<p>Os nós são percorridos e depois imprimidos</p>

<h3>Leitura</h3>

```C
void PosOrdem(Node *raiz) {
  if (raiz == NULL)
    return;

  PosOrdem(raiz->esquerda);
  PosOrdem(raiz->direita);
  printf("%d\n", raiz->valor);
}
```