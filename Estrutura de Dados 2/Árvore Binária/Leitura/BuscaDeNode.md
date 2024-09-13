<h1 align="center">Busca de Nó</h1>

<p>Algoritmo para buscar um nó específico</p>

<br>

```C
Node* BuscaNode(Node* raiz, int valor){
  if(raiz == NULL) return NULL;
  
  if(raiz->valor == valor) return raiz;
    
  if(valor < raiz->valor) 
    BuscaNode(raiz->esquerda, valor);
  
  else 
    BuscaNode(raiz->direita, valor);

  return NULL;
}
```