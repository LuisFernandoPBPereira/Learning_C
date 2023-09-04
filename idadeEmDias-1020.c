#include <stdio.h>
 
int main() {
 
    int idadeDias=0, dias=0, meses=0, anos=0;
    
    
    scanf("%d", &idadeDias);
    
    //Usando while para determinar a quantia de anos
    while(idadeDias>=365){
         idadeDias-=365;
         anos++;
    }
    
    //Usando while para determinar a quantia de meses
    while(idadeDias>=30){
        idadeDias-=30;
        meses++;
    }
    
    //O resto que sobra das repetições, é atribuido para dias
    dias = idadeDias;

	printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
 
    return 0;
}