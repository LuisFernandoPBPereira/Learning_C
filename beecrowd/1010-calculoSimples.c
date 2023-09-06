#include <stdio.h>
 
int main() {   
    int peca1, peca2, valorU1, valorU2;
    double valorPeca1, valorPeca2, total;
    
    //Pegamos a numeração da peça (peca1, peca2)
    //Pegamos o valor unitário das peças(valorU1, valorU2)
    //Pegamos o preço das peças(valorPeca1, valorPeca2)
    scanf("%d%d%lf", &peca1, &valorU1, &valorPeca1);
    scanf("%d%d%lf", &peca2, &valorU2, &valorPeca2);
 
    total = (valorPeca1 * valorU1) + (valorPeca2 * valorU2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}