#include <stdio.h>
 
int main() {
 
    float a, b, c, aQ, bQ, cQ, temp;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if(a < c){
        temp=a;
        a=c;
        c=temp;
    }
    if(a < b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b < c){
        temp=b;
        b=c;
        c=temp;
    }
    
    aQ = a*a;
    bQ = b*b;
    cQ = c*c;
    
    
    if(a >= b+c) printf("NAO FORMA TRIANGULO\n");
    else{
        
        if(aQ == bQ+cQ) printf("TRIANGULO RETANGULO\n");
        if(aQ > bQ+cQ) printf("TRIANGULO OBTUSANGULO\n");
        if(aQ < bQ+cQ) printf("TRIANGULO ACUTANGULO\n");
    }
    
    if(a == b && b == c) printf("TRIANGULO EQUILATERO\n");
    else{
        if(a==b || b==c || a==c)
            printf("TRIANGULO ISOSCELES\n");
    }
 
    return 0;
}