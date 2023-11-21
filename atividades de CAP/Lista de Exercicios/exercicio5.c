/*
    5. Crie em Java uma matriz 3x3 de inteiros, preencha a matriz e verifique se a matriz é um
    quadrado mágico. Diz-se que uma matriz é um quadrado mágico quando a soma de todas as
    suas linhas, todas as suas colunas, sua diagonal principal e sua diagonal secundária resultam no
    mesmo valor. Exemplo abaixo.
*/

int main() {

  int l, c, somaCol1=0, somaCol2=0, somaCol3=0, somaLinha1=0, somaLinha2=0, somaLinha3=0, somaDiagP=0, somaDiagS=0;
  int matriz[3][3] = {{2, 7, 6},
                      {9, 5, 1},
                      {4, 3, 8}};

  for(l=0; l<3; l++){
    somaCol1 += matriz[l][0];
    somaCol2 += matriz[l][1];
    somaCol3 += matriz[l][2];
  }
  for(c=0; c<3; c++){
    somaLinha1 += matriz[0][c];
    somaLinha2 += matriz[1][c];
    somaLinha3 += matriz[2][c];
  }

  for(c=0; c<3; c++){
    somaDiagP += matriz[c][c];
  }

  for(l=0, c=2; l<3; l++, c--){
    somaDiagS += matriz[l][c];
  }

  if(somaCol1 == somaCol2 && 
     somaCol2 == somaCol3 && 
     somaCol3 == somaLinha1 && 
     somaLinha1 == somaLinha2 && 
     somaLinha2 == somaLinha3 && 
     somaLinha3 == somaDiagP && 
     somaDiagP == somaDiagS)
  {
    printf("A matriz é um quadrado mágico!\n");
  }
  else{
    printf("A matriz não é um quadrado mágico!\n");
  }
}