#include <stdio.h>
 
int main() {

  int n, i, nPares=0, nImpares=0;

  printf("Digite 10 numeros:\n");
  
	for(i=0; i<10; i++){
		scanf("%d", &n);
		if(n%2==0){
			nPares++;
		}
		else{
			nImpares++;	
		}
	}
	printf("Numeros pares: %d\n", nPares);
	printf("Numeros impares: %d\n", nImpares);

  return 0;
}
