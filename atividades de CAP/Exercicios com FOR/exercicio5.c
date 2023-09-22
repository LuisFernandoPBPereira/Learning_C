#include <stdio.h>
 
int main() {

  int n, nIntervalos=0, nFora=0, i;

  printf("Digite 10 numeros:\n");
  
	for(i=0; i<10; i++){
		scanf("%d", &n);
		if(n>=10 && n<=20){
			nIntervalos++;
		}
		else{
			nFora++;
		}
	}
	
	printf("Numeros no intervalo [10,20]: %d\n", nIntervalos);
	printf("Numeros fora do intervalo [10,20]: %d\n", nFora);

  return 0;
}
