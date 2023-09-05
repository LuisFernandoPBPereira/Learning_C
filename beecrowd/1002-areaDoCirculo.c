#include <stdio.h>
 
int main() {
    double area, n=3.14159, raio;
    
    scanf("%lf", &raio);
    
    area = n * (raio * raio);
    
    printf("A=%.4lf\n", area);
    
    return 0;
}