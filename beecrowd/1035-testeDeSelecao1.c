#include <stdio.h>
 
int main() {
    int a, b, c, d, somaAB, somaCD;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);
    somaAB = a + b;
    somaCD = c + d;
    
    if(b>c && d>a && somaCD>somaAB && c>0 && d>0 && a%2==0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
 
    return 0;
}