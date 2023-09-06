#include <stdio.h>
 
int main() {
 
    int nh, numFunc;
    double salario;
    
    scanf("%d%d", &numFunc, &nh);
    scanf("%lf", &salario);
    
    salario = salario * nh;
    
    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}