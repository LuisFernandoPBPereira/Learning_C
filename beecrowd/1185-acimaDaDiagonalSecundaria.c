#include <stdio.h>
 
int main() {
 
    char op;
    float matriz[12][12], soma=0, cont=0;
    
    scanf(" %c", &op);
 
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    for(int i=0; i<11; i++){
        for(int j=10-i; j>=0; j--){
            soma+=matriz[i][j];
            cont++;
        }
    }
    
    if(op == 'M'){
        soma /=cont;
    }
    printf("%.1f\n", soma);
 
    return 0;
}