#include <stdio.h>
 
int main() {
 
    int n, x, y, contI, aux, somaI=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &x);
        scanf("%d", &y);
        if(x>y){
          aux=x;
          x=y;
          y=aux;
        }
        contI=x+1;
      
        while(contI != y && x!=y){
          if(contI%2!=0){
              somaI+=contI;
          }
        contI++;
        }
        if(x==y) printf("0\n");
        else printf("%d\n", somaI);
        somaI=0;
    }
    return 0;
}