#include <stdio.h>
 
int main() {
 
    int n, x, y, somaI=0, cont=0, contI=0;
    
    scanf("%d", &n);

    for(int i=0; i<n; i++){
      scanf("%d", &x);
      scanf("%d", &y);
      contI=x;
    
      while(cont != y){
        if(contI%2!=0){
          somaI+=contI;
          cont++;
        }
        contI++;
      }
      printf("%d\n", somaI);
      cont = 0;
      somaI=0;
    }
    
    return 0;
}