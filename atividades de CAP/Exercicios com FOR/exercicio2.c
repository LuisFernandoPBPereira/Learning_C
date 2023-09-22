#include <stdio.h>
 
int main() {

  int idades=0, nIdades=0, i;
	float media=0;

  printf("Digite 50 idades:\n");
	for(i=0; i<50; i++){
		scanf("%d", &idades);
		media += idades;
		nIdades++;
	}
	media = media / nIdades;
	printf("A media das idades eh: %.1f\n", media); 	

  return 0;
}