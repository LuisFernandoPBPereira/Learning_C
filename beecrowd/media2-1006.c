#include <stdio.h>
 
int main() {
 
    double a, b, c, media;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    media = ((a*2.0) + (b*3.0) + (c*5.0))/(2.0 + 3.0 + 5.0);
    
    printf("MEDIA = %.1lf\n", media);
    
    return 0;
}