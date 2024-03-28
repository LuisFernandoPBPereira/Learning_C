#include <stdio.h>
#include <string.h>

int romanToInt(char *s) {
  char simbolos[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
  int valores[] = {1, 5, 10, 50, 100, 500, 1000};

  int anterior = 0;
  int soma = 0;

  for (int i = strlen(s); i >= 0; i--) 
  {
    for (int j = 0; j < 7; j++) 
    {
      if (strncmp(&s[i], &simbolos[j], 1) == 0) 
      {
        if (anterior > valores[j]) 
        {
          soma -= valores[j];
          anterior = valores[j];
        } 
        else 
        {
          soma += valores[j];
          anterior = valores[j];

        }
        break;
      }
    }
  }
  return soma;
}
int main(void) {
  printf("%d", romanToInt("IX"));
  return 0;
}
