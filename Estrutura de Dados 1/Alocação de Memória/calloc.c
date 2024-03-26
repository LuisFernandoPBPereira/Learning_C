#include <malloc.h>
#include <stdlib.h>

//Usamos o Calloc para alocar memória, sendo que o calloc inicializa a memória com 0
void callocInt() {
  int tamanho = 5;
  int *vetorCalloc = calloc(tamanho, sizeof(int));

  for (int i = 0; i < tamanho; i++) {
    printf("Insira o %dº valor: \n", i + 1);
    scanf("%d", &vetorCalloc[i]);
  }

  for (int i = 0; i < tamanho; i++) {
    printf("%d\n", vetorCalloc[i]);
  }
}

int main() {
  // callocInt();
  return 0;
}