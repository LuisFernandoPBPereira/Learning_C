#include <stdio.h>

int main(void) {

  int x, impares, cont = 0;

  scanf("%d", &x);
  
  while(cont < x){
    if(cont % 2 != 0){
      impares = cont;
      printf("%d\n", impares);
    }
    cont++;
  }
  if(x % 2 != 0){
    printf("%d\n", x);
  }
  
  return 0;
}