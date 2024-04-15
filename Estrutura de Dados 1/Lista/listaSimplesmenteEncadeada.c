#include <stdio.h>
#include <stdlib.h>

//   REPRESENTAÇÃO GRÁFICA DOS NÓS DA STRUCT

/*
  +-------+----------+      +-------+----------+      +-------+----------+
  | valor | próximo  | ---> | valor | próximo  | ---> | valor | próximo  | ---> NULL
  +-------+----------+      +-------+----------+      +-------+----------+
  |   10  | 0x1000   |      |   20  | 0x2000   |      |   30  |   NULL   |
  +-------+----------+      +-------+----------+      +-------+----------+
    Nodo 1                 Nodo 2                   Nodo 3

*/

typedef struct no
{
  int valor;
  struct no *proximo;
}No;

void inserirNoInicio(No **lista, int num)
{
  No* novoItem = malloc(sizeof(No));

  if(novoItem != NULL){
    novoItem->valor = num;
    novoItem->proximo = *lista;
    *lista = novoItem;
  }
  else printf("\nErro ao alocar memoria\n");
}

void inserirNoFim(No **lista, int num)
{
  No *aux, *novoItem = malloc(sizeof(No));

  if(novoItem != NULL)
  {
    novoItem->valor = num;
    novoItem->proximo = NULL;

    if(*lista == NULL)
      *lista = novoItem;
    else
    {
      aux = *lista;
      while(aux->proximo != NULL)
        aux = aux->proximo;

      aux->proximo = novoItem;
    }
  }
  else printf("\nErro ao alocar memoria\n");
}

void inserirNoMeio(No **lista, int num, int anterior)
{
  No *novoItem = malloc(sizeof(No));

  if(novoItem != NULL)
  {
    novoItem->valor = num;

    if(*lista == NULL
      ){
      novoItem->proximo = NULL;
      *lista = novoItem;
    }
    else
    {
      No *aux = *lista;
      
      while(aux->valor != anterior && aux->proximo != NULL)
        aux = aux->proximo;

      novoItem->proximo = aux->proximo;
      aux->proximo = novoItem;
    }
  }
  else printf("\nErro ao alocar memoria\n");
}

void imprimirLista(No *lista)
{
  printf("---------- LISTA ---------\n");
  while(lista != NULL){
    printf("\t\t\t%d\n", lista->valor);
    lista = lista->proximo;
  }
  printf("------ FIM DA LISTA ------\n");
}

int main()
{
  No *lista = NULL;
  int opcao, valor, anterior;
  do
  {
    printf("0 - Sair\n1 - Inserir no inicio\n2 - Inserir no meio\n3 - Inserir no fim\n4 - Imprimir\n");
    scanf("%d", &opcao);
    switch(opcao)
    {
      case 0:
        printf("Saindo...\n");
        break;
      case 1:
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        inserirNoInicio(&lista, valor);
        break;
      case 2:
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        printf("Digite o valor onde o novo valor deve se posicionar a frente:\n");
        scanf("%d", &anterior);
        inserirNoMeio(&lista, valor, anterior);
        break;
      case 3:
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        inserirNoFim(&lista, valor);
        break;
      case 4:
        imprimirLista(lista);
        break;
      default:
        printf("Opcao invalida\n");
        break;
    }
    
  }while(opcao != 0);
  
  return 0;
}