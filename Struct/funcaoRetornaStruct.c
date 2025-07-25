#include <stdio.h>

struct Pessoa{
  char nome[50];
  int idade;
};

struct Pessoa retornaPessoa() {
  struct Pessoa pessoa;
  scanf("%s", pessoa.nome);
  scanf("%d", &pessoa.idade);

  return pessoa;
}

int main() {
  struct Pessoa novaPessoa = retornaPessoa();
  printf("%s\n", novaPessoa.nome);
  printf("%d\n", novaPessoa.idade);

  return 0;
}