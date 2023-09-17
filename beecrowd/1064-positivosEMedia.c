#include <stdio.h>

int main(void) {

  float n, media = 0;
  int cont = 0, nPos = 0;

  while(cont < 6){
    scanf("%f", &n);
    if(n > 0){
      media += n;
      nPos++;
    }
    cont++;
  }
  media = media / nPos;

  printf("%d valores positivos\n", nPos);
  printf("%.1f\n", media);
  
  return 0;
}