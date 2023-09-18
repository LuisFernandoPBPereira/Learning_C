#include <stdio.h>
 
int main() {
 
    int cod, qtde;
    float total;
    
    scanf("%d%d", &cod, &qtde);
    
    if(cod == 1){
        total = 4.00 * qtde;
    }
    else if(cod == 2){
        total = 4.50 * qtde;
    }
    else if(cod == 3){
        total = 5.00 * qtde;
    }
    else if(cod == 4){
        total = 2.00 * qtde;
    }
    else if(cod == 5){
        total = 1.50 * qtde;
    }
    printf("Total: R$ %.2f\n", total);
 
    return 0;
}