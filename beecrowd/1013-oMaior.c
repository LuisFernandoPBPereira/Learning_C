#include <stdio.h>
 
int main() {
 
    int a, b, c, maiorAB;
    
    scanf("%d%d%d", &a, &b, &c);
    
    //a função abs() troca o sinal do número passado no parâmetro
    maiorAB = (a+b+abs(a-b))/2;
    maiorAB = (maiorAB+c+abs(maiorAB-c))/2;

    
    printf("%d eh o maior\n", maiorAB);
    
    return 0;
}