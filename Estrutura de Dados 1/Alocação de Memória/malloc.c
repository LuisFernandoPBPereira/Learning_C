#include <malloc.h>
#include <stdlib.h>

void mallocInt() {
  int *vetor = malloc(sizeof(int) * 10);

  for (int i = 0; i < 10; i++) {
    printf("Insira o %dº valor: \n", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", vetor[i]);
  }
}

struct Pessoa {
  char nome[50];
  int idade;
};

void mallocStruct() {
  int tamanho = 2;
  struct Pessoa *pessoa = malloc(sizeof(struct Pessoa) * tamanho);

  for (int i = 0; i < tamanho; i++) {
    printf("Insira o %dº nome: \n", i + 1);
    scanf(" %s", pessoa[i].nome);
    printf("Insira a %dª idade: \n", i + 1);
    scanf("%d", &pessoa[i].idade);
  }

  for (int i = 0; i < tamanho; i++) {
    printf("%s\n", pessoa[i].nome);
    printf("%d\n", pessoa[i].idade);
  }
}

void mallocStruct2() {
  struct Pessoa *pessoa = malloc(sizeof(struct Pessoa));

  printf("Insira o nome: \n");
  scanf(" %s", pessoa->nome);
  printf("Insira a idade: \n");
  scanf("%d", &pessoa->idade);

  printf("%s\n", pessoa->nome);
  printf("%d\n", pessoa->idade);
}

int main() {
  // mallocInt();
  // mallocStruct();
  // mallocStruct2();

  return 0;
}