int main() {
  int matriz[3][6] = {
      {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}, {1, 2, 3, 4, 5, 6}};
  int vetor[3];
  int l, c, soma = 0, mediaCol2, mediaCol4, somaCol1, somaCol2, somaCol3;

  for (l = 0; l < 3; l++) {
    for (c = 0; c < 6; c++) {
      if ((c + 1) % 2 != 0) {
        soma += matriz[l][c];
        ;
      }
      if (c == 1) {
        mediaCol2 += matriz[l][c];
      }
      if (c == 3) {
        mediaCol4 += matriz[l][c];
      }
      if (c == 0) {
        vetor[l] += matriz[l][c];
      }
    }
  }
  mediaCol2 = mediaCol2 / 3;
  mediaCol4 = mediaCol4 / 3;
  printf("A soma das colunas impares eh: %d\n", soma);
  printf("A media das colunas 2 e 4 sao: %d, %d\n", mediaCol2, mediaCol4);

  for(l=0; l<3; l++){
    matriz[l][5] = matriz[l][0] + matriz[l][1];
  }

  printf("Matriz modificada:\n\n");
  
  for (l = 0; l < 3; l++) {
    for (c = 0; c < 6; c++) {
      printf("%d ", matriz[l][c]);
    }
    printf("\n");
  }
}