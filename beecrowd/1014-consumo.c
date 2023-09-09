#include <stdio.h>
 
int main() {
    //x representa a distância
    int x;
    //y representa o combustível gasto
    float y, consumo;
    
    scanf("%d%f", &x, &y);
    
    consumo = x/y;
    
    printf("%.3f km/l\n", consumo);
 
    return 0;
}