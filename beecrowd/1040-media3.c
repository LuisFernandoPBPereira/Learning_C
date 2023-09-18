#include <stdio.h>

int main(void) {

  float n1, n2, n3, n4, media, nExame;

  scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

  media = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/(2+3+4+1);

  if(media >= 7.0){
    printf("Media: %.1f\n", media);
    printf("Aluno aprovado.\n");
  }
  else if(media < 5.0){
    printf("Media: %.1f\n", media);
    printf("Aluno reprovado.\n");
  }
  else if(media >= 5.0 && media <= 6.9){
    printf("Media: %.1f\n", media);
    printf("Aluno em exame.\n");
    scanf("%f", &nExame);
    media = (media + nExame) / 2;
    printf("Nota do exame: %.1f\n", nExame);
    media >= 5.0 ? printf("Aluno aprovado.\n"):
                   printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n", media);
  }
  
  return 0;
}