<h1 align="center">Remoção de Nó</h1>

<p>Temos 3 casos de remoção:</p>

- O nó a ser removido não possui filhos
    - Basta remover o nó

- O nó a ser removido possui um filho
    - Substitua o nó a ser removido pelo seu filho

- O nó a ser removido possui dois filhos
    - Encontre o nó de valor mínimo na subárvore direita (sucessor em ordem)
    - Substitua o nó a ser removido pelo sucessor da ordem
    - Remova o sucessor em ordem da subárvore direita

<br>

<h3>Remoção</h3>

```C
Node* RemoverNode(Node* raiz, int valor){
  Node* temp = NULL;
  Node* nodeMinimo = NULL;
  
  if(raiz == NULL) return NULL;

  //=============== Tentando encontrar o nó a ser removido ==========
  if(valor < raiz->valor)
    raiz->esquerda = RemoverNode(raiz->esquerda, valor);
  
  else if(valor > raiz->valor)
    raiz->direita = RemoverNode(raiz->direita, valor);
  //=================================================================
    
  else{
    // Encontrou o nó a ser removido
    if(raiz->esquerda == NULL && raiz->direita == NULL){
      free(raiz);
      return NULL;
    }  
    if(raiz->esquerda == NULL){
      temp = raiz->direita;
      free(raiz);
      return temp;
    }
    else if(raiz->direita == NULL){
      temp = raiz->esquerda;
      free(raiz);
      return temp;
    }

    nodeMinimo = BuscaNodeMinimo(raiz->direita);
    raiz->valor = nodeMinimo->valor;
    raiz->direita = RemoverNode(raiz->direita, nodeMinimo->valor);
  }

  return raiz;
}
```

<br>

<h3>Encontrar Nó Mínimo</h3>

```C
Node* BuscaNodeMinimo(Node* node){
  while(node->esquerda != NULL){
    node = node->esquerda;
  }

  return node;
}
```