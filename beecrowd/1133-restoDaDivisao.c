#include <stdio.h>
 
int main() {
    int x, y, cont = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){
        cont = y + 1;
        while(cont < x){
            if(cont % 5 == 2 || cont % 5 == 3)
                printf("%d\n", cont);
      
            cont++;
        }  
    }
    else{
        cont = x + 1;

        while(cont < y){
            if(cont % 5 == 2 || cont % 5 == 3)
                printf("%d\n", cont);
      
            cont++;
        }  
    } 
 
    return 0;
}