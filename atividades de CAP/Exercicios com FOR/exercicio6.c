#include <stdio.h>
 
int main() {

  int base, expo, i, n=1;
	printf("Digite um numero para a base:\n");
	scanf("%d", &base);
  printf("Digite o expoente:\n");
	scanf("%d", &expo);
	
	for(i=0; i<expo; i++){
		n = n * base;
	}
	
	printf("O resultado eh: %d\n", n);

  return 0;
}
