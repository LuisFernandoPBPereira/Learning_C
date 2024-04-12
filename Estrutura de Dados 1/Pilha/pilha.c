#include <stdio.h>
#include <malloc.h>

// Struct da Data de Nascimento
typedef struct{
  int dia, mes, ano;
} Data;

// Struct Pessoa
typedef struct{
  char nome[50];
  Data data;
} Pessoa;

// Struct que representa Nó da pilha 
typedef struct no{
  Pessoa pessoa;
  struct no *proximo;
}No;

// Função que retorna uma struct Pessoa com os dados respectivos  
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

/* 
    Função de empilhar que retorna o ponteiro de uma struct Nó
    e recebe como parâmetro um ponteiro de uma struct Nó
*/
No* empilhar(No *topo){
  // Alocamos um ponteiro de uma struct Nó
  No *novoItem = malloc(sizeof(No));

  // Se o novoItem não for NULL, recebemos os dados e retornamos
  if(novoItem){
    novoItem->pessoa = lerPessoa();
    novoItem->proximo = topo;
    return novoItem;
  }
  else printf("Erro ao alocar memória...\n");

  return NULL;
}

/*
    "desempilhar" retorna um ponteiro de uma struct Nó e recebe
    como parâmetro um ponteiro de um ponteiro de uma struct Nó
*/ 
No* desempilhar(No **topo){
  // Se o endereço for diferente de NULL, removemos  
  if(*topo != NULL){
    No *remover =  *topo;
    *topo = remover->proximo;
    return remover;
  }
  else printf("Pilha vazia\n");

  return NULL;
}

void imprimirPilha(No *topo){
  printf("--------------- PILHA ---------------\n");
  while(topo != NULL){
    imprimirPessoa(topo->pessoa);
    topo = topo->proximo;
  }
  printf("\n------------ FIM DA PILHA -----------\n");
}

int main(void) {
  No *remover, *topo = NULL;
  int opcao;

  do{
    printf("\n0- Sair\n1- Empilhar\n2- Desempilhar\n3-Imprimir\n");
    scanf("%d", &opcao);

    switch(opcao){
      case 1:
        topo = empilhar(topo);
        break;
      case 2:
        remover = desempilhar(&topo);
        if(remover){
          printf("\nElemento removido:");
          imprimirPessoa(remover->pessoa);
        }
        else 
          printf("Nao ha dados para desempilhar\n");
        break;
      case 3:
        imprimirPilha(topo);
        break;
      default:
        printf("Opcao invalida\n");
        break;
    }

    
  } while(opcao != 0);
  return 0;
}