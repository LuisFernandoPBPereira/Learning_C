#include <stdio.h>
 
int main() {

  int num, i;
	printf("Digite um numero inteiro entre 1 e 10.\n");
	scanf("%d", &num);
	
	if(num<1 || num >10){
		printf("Numero incorreto.\n");
	}
	else{
		for(i=0; i<=10; i++){
			printf("%d x %d = %d\n", num, i, num*i);
		}	
	}	

  return 0;
}