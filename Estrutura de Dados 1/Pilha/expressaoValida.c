#include <malloc.h>
#include <stdio.h>

typedef struct no 
{
  char caracter;
  struct no *proximo;
} No;

No *empilhar(No *pilha, char valor)
{
  No *novoItem = malloc(sizeof(No));

  if (novoItem) 
  {
    novoItem->caracter = valor;
    novoItem->proximo = pilha;

    return novoItem;
  } 
  else 
  {
    printf("Erro ao alocar memória...\n");
  }

  return NULL;
}

No *desempilhar(No **pilha) 
{
  No *remover = NULL;

  if (*pilha != NULL) 
  {
    remover = *pilha;
    *pilha = remover->proximo;
  } 
  else 
  {
    printf("\nPilha vazia\n");
  }
  
  return remover;
}

void imprimir(No *pilha)
{
  printf("PILHA\n");
  
  while(pilha != NULL)
  {
    printf(" %c\n", pilha->caracter);
    pilha = pilha->proximo;
  }
  
  printf("FIM PILHA\n\n");
}

int formaPar(char fechamento, char desempilhado)
{
  switch(fechamento)
  {
    case ')':
      if(desempilhado == '(') return 1;
      else return 0;
      break;
    case '}':
      if(desempilhado == '}') return 1;
      else return 0;
      break;
    case ']':
      if(desempilhado == ']') return 1;
      else return 0;
      break;
  }
  return 0;
}

int expressaoBemFormada(char expressao[])
{
  int i=0;
  No *remover, *pilha = NULL;
  
  while(expressao[i] != '\0')
  {
    if(expressao[i] == '(' || expressao[i] == '{' || expressao[i] == '[')
    {
      pilha = empilhar(pilha, expressao[i]);
      imprimir(pilha);
    } 
    else if(expressao[i] == ')' || expressao[i] == '}' || expressao[i] == ']')
    {
      remover = desempilhar(&pilha);
      if(formaPar(expressao[i], remover->caracter) == 0) return 1;

      free(remover);
    }
    i++;
  }
  imprimir(pilha);
  
  if(pilha != NULL)
  {
    printf("Expressao mal formada\n");
    return 0;
  }
  else
  {
    printf("Expressao bem formada\n");
    return 1;
  }
}

int main() 
{
  char expressao[50];

  printf("Digite a expressao: ");
  scanf("%49[^\n]", expressao);

  printf("Expressao: %s\nRetorno: %s", expressao, 
    expressaoBemFormada(expressao) == 0 ? "falso" : "verdadeiro");
}