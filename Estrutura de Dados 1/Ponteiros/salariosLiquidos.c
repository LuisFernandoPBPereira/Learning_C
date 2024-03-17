#include <stdio.h>

void calcularSalario(float* salariosLiq, int tamanho) 
{  
  for (int i = 0; i < tamanho; i++) 
  {
    salariosLiq[i] -= (salariosLiq[i] / 100) * 8; 
  }
}

int main(void) 
{
  int tamanho = 5;
  float salarios[] = {1500, 2000, 3000, 4000, 5000};

  calcularSalario(salarios, tamanho);

  for(int i=0; i<tamanho; i++)
  {
    printf("%.2f\n", salarios[i]);
  }
}