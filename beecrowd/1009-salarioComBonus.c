#include <stdio.h>
 
int main() {
 
    double salarioFixo, montanteTotal, total;
    char nome[20];
    
    scanf(" %s", &nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &montanteTotal);
    
    total = (0.15 * montanteTotal) + salarioFixo;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}