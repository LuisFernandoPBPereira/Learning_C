#include <stdio.h>
#include <malloc.h>

typedef struct{
  int dia, mes, ano;
} Data;

typedef struct{
  char nome[50];
  Data data;
} Pessoa;

typedef struct no{
  Pessoa pessoa;
  struct no *proximo;
}No;

typedef struct{
  No *topo;
  int tamanho;
}Pilha;

void criarPilha(Pilha *pilha){
  pilha->topo = NULL;
  pilha->tamanho = 0;
}

Pessoa lerPessoa(){
  Pessoa pessoa;
  printf("Digite o nome e a data de nascimento dd mm aaaa:\n");
  scanf(" %s%d%d%d", pessoa.nome, 
                          &pessoa.data.dia, 
                          &pessoa.data.mes, 
                          &pessoa.data.ano);
  return pessoa;
}

void imprimirPessoa(Pessoa pessoa){
  printf("\nNome: %s\nData: %2d/%2d/%4d\n", pessoa.nome, 
                                          pessoa.data.dia, 
                                          pessoa.data.mes, 
                                          pessoa.data.ano);
}

// Não há retorno, sem seu parâmetro é passado o ponteiro de uma pilha
void empilhar(Pilha *pilha){
  No *novoItem = malloc(sizeof(No));

  if(novoItem){
    novoItem->pessoa = lerPessoa();
    novoItem->proximo = pilha->topo;
    pilha->topo = novoItem;
    pilha->tamanho++;
  }
  else printf("Erro ao alocar memória...\n");

}

No* desempilhar(Pilha *pilha){
  if(pilha->topo != NULL){
    No *remover =  pilha->topo;
    
    pilha->topo = remover->proximo;
    pilha->tamanho--;
    
    return remover;
  }
  else printf("\nPilha vazia\n");

  return NULL;
}

void imprimirPilha(Pilha *pilha){
  No *aux = pilha->topo;
  printf("--------------- PILHA - Tamanho: %d ---------------\n", pilha->tamanho);
  while(aux != NULL){
    imprimirPessoa(aux->pessoa);
    aux = aux->proximo;
  }
  printf("\n------------ FIM DA PILHA -----------\n");
}

int main(void) {
  No *remover;
  int opcao;
  Pilha pilha;
  
  criarPilha(&pilha);
  
  do{
    printf("\n0- Sair\n1- Empilhar\n2- Desempilhar\n3-Imprimir\n");
    scanf("%d", &opcao);

    switch(opcao){
      case 1:
        empilhar(&pilha);
        break;
      case 2:
        remover = desempilhar(&pilha);
        if(remover){
          printf("\nElemento removido:");
          imprimirPessoa(remover->pessoa);
          free(remover);
        }
        else 
          printf("Nao ha dados para desempilhar\n");
        break;
      case 3:
        imprimirPilha(&pilha);
        break;
      default:
        printf("Opcao invalida\n");
        break;
    }


  } while(opcao != 0);
  return 0;
}