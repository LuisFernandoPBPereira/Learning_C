/*
    4. Crie em Java uma matriz 4x4 de decimais, preencha a matriz e depois:
    a) Exiba os valores da sua diagonal principal;
    b) Exiba os valores da sua diagonal secundária;
    c) A sua matriz transposta.
*/

int main() {

  int l, c;
  float matriz[4][4] = {{1.1, 2.2, 3.3, 4.4},
                        {5.5, 6.6, 7.7, 8.8},
                        {9.9, 10.1, 11.11, 12.12},
                        {13.13, 14.14, 15.15, 16.16}};
  float matrizTransposta[4][4];

  printf("Diagonal principal:\n");

  for(l=0; l<4; l++){
    printf("%.2f ", matriz[l][l]);
  }

  printf("\n\n");

  printf("Diagonal secundaria:\n");

  for(l=0, c=3; l<4; l++, c--){
    printf("%.2f ", matriz[l][c]);
  }

  printf("\n\n");

  for(l=0; l<4; l++){
    for(c=0; c<4; c++){
      matrizTransposta[c][l] = matriz[l][c];
    }
  }

  printf("Matriz transposta:\n");

  for(l=0; l<4; l++){
    for(c=0; c<4; c++){
      printf("%.2f ",matrizTransposta[l][c]);
    }
    printf("\n");
  }
}