#include <stdio.h>
 
int main() {

    //Escreva um programa que leia três valores com ponto flutuante
    //de dupla precisão: A, B e C. Em seguida, calcule e mostre:
 
    double a, b, c, areaTri, areaCirc, areaTrap, areaQuad, areaRetan;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    
    //a) a área do triângulo retângulo que tem A por base e C por altura.
    areaTri   = (a*c)/2;
    //b) a área do círculo de raio C. (pi = 3.14159)
    areaCirc  = 3.14159 * (c * c);
    //c) a área do trapézio que tem A e B por bases e C por altura.
    areaTrap  = ((a+b)*c)/2;
    //d) a área do quadrado que tem lado B.
    areaQuad  = b*b;
    //e) a área do retângulo que tem lados A e B.
    areaRetan = a*b;
    
    printf("TRIANGULO: %.3lf\n", areaTri);
    printf("CIRCULO: %.3lf\n", areaCirc);
    printf("TRAPEZIO: %.3lf\n", areaTrap);
    printf("QUADRADO: %.3lf\n", areaQuad);
    printf("RETANGULO: %.3lf\n", areaRetan);
 
    return 0;
}