#include <malloc.h>
#include <stdio.h>

struct No {
  int valor;
  struct No *prox;
};

struct No *CriaNo(int valor) {
  struct No *novoNo = malloc(sizeof(struct No));
  novoNo->valor = valor;
  novoNo->prox = NULL;

  return novoNo;
}

int main(void) {
  int valor;

  struct No *primeiro = CriaNo(3);
  struct No *temp = primeiro;

  for (int i = 0; i < 3; i++) {
    printf("Digite um valor: ");
    scanf("%d", &valor);

    struct No *novo = CriaNo(valor);

    temp->prox = novo;
    temp = temp->prox;
  }

  temp = primeiro;

  while (temp != NULL) {
    printf("%d\n", temp->valor);
    temp = temp->prox;
  }


  return 0;
}