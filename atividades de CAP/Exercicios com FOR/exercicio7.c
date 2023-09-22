#include <stdio.h>
 
int main() {

  int n=0, i, maior=0;

  printf("Digite 5 numeros:\n");
  
	for(i=0; i<5; i++){
		scanf("%d", &n);
		if(n>maior){
			maior=n;
		}
	}
	printf("O maior eh: %d\n", maior);

  return 0;
}