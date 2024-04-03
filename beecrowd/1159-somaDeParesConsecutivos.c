#include <stdio.h>
 
int main() {
 
    int x=1, cont=0, contP=0, soma=0;

    while(x!=0){
      scanf("%d", &x);
      if(x==0) break;
      contP=x;
      while(cont<5){
          if(contP%2==0){
              soma += contP;
              cont++;
          }
          contP++;
      }
      printf("%d\n", soma);
      cont=0;
      soma=0;
    }
 
    return 0;
}