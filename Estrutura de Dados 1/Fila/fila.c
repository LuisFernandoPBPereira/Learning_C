#include <malloc.h>
#include <stdio.h>

typedef struct no 
{
  int valor;
  struct no *proximo;
} No;

void inserirNaFila(No **fila, int num) 
{
  No *aux, *novoItem = malloc(sizeof(No));

  if (novoItem != NULL) 
  {
    novoItem->valor = num;
    novoItem->proximo = NULL;
    if (*fila == NULL) 
    {
      *fila = novoItem;
    } 
    else 
    {
      aux = *fila;
      
      while (aux->proximo != NULL)
        aux = aux->proximo;
      
      aux->proximo = novoItem;
    }
  } else
    printf("Erro ao alocar memória...\n");
}

No *removerDaFila(No **fila)
{
  No *remover = NULL;

  if(*fila != NULL)
  {
    remover = *fila;
    *fila = remover->proximo;
  }
  else printf("\nFila vazia\n");

  return remover;
}

void imprimirFila(No *fila)
{
  printf("\t---------- FILA ---------\n");
  while(fila != NULL)
  {
    printf("\t\t\t%d\n", fila->valor);
    fila = fila->proximo;
  }
  printf("\n\t------ FIM DA FILA ------\n\n");

}

int main() 
{ 
  No *remover, *fila = NULL; 
  int opcao, valor;

  do
  {
    printf("0 - Sair\n1 - Inserir\n2 - Remover\n3 - Imprimir\n");
    scanf("%d", &opcao);

    switch(opcao)
    {
      case 0:
        printf("Saindo...\n");
        break;
      case 1:
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        inserirNaFila(&fila, valor);
        break;
      case 2:
        remover = removerDaFila(&fila);
        if(remover != NULL)
        {
          printf("\nElemento removido: %d\n\n", remover->valor);
          free(remover);
        }
        else
        {
          printf("\nFila vazia\n");
        }
        break;
      case 3:
        imprimirFila(fila);
        break;
      default:
        printf("\nOpcao invalida\n");
        break;
    }

  }while(opcao != 0);
}