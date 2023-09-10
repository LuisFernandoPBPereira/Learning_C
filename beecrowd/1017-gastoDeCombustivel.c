#include <stdio.h>
 
int main() {
 
    int tempoH, vel;
    float gasto;
    
    scanf("%d%d", &tempoH, &vel);
    
    //gasto é a velocidade * tempo / 12km/l
    gasto = (vel * tempoH)/12.0;
    
    printf("%.3f\n", gasto);
 
    return 0;
}