#include <string.h>

int lengthOfLastWord(char* s) {
  int cont=0, i=0;
  for(int i=strlen(s); i>=0; i--){
    if(strncmp(&s[i], "\0", 1) == 0){
      continue;
    }
    if(strncmp(&s[i], " ", 1) == 0){
      if(cont==0){
        cont = 0;
      }
      else{
        break;
      }
    }
    else{
      cont++;
    }
  }

  return cont;
}

int main(){

  printf("%d\n", lengthOfLastWord("Hello world  "));
  return 0;
}