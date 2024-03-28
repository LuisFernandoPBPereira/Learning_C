#include <stdio.h>
#include <stdbool.h>  


bool isValid(char* s) {
  int tamanho = strlen(s);
  char pilha[tamanho];
  int indicePilha = -1;
  int i=0;
  
  while(i < tamanho)
  {
    if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        //"Pilha" recebe apenas a abertura dos parênteses/chaves/colchetes
        pilha[++indicePilha] = s[i];
    else
    {
        //Comparamos se o fechamento bate com a abertura nos 3 casos
        if(indicePilha == -1 || 
        (s[i] == ')' && pilha[indicePilha] != '(') ||
        (s[i] == '}' && pilha[indicePilha] != '{') ||
        (s[i] == ']' && pilha[indicePilha] != '['))
            return false;

        indicePilha--;
    }
    i++;
  }  
  
  return indicePilha == -1; 

}

int main(void) 
{
  bool validado;
  validado = isValid("({})");
  printf("%d", validado);
  return 0;
}
