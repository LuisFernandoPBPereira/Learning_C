#include <stdio.h>

int main(void) {

    int n, x, cont=0;

    scanf("%d", &n);
  
    while(cont < n){
        scanf("%d", &x);
        if(x == 0){
            printf("NULL\n");
        }
        else if(x % 2 == 0){
            x > 0 ? printf("EVEN POSITIVE\n"):
                  printf("EVEN NEGATIVE\n");
    }
        else{
            x > 0 ? printf("ODD POSITIVE\n"):
                  printf("ODD NEGATIVE\n");
    }
    cont++;
    
    }
  
  return 0;
}