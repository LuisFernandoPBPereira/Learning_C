#include <stdio.h>
#include <string.h>
#include <malloc.h>

char* intToRoman(int num) {
  char* roman[] = 
  {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  
  char* result = malloc(sizeof(char) *50);
  while(num != 0){
    
    if(num >= 1000){
      strcat(result, roman[0]);
      num -= 1000;
    }
    else if(num >= 900){
      strcat(result, roman[1]);
      num -= 900;
    }
    else if(num >= 500){
      strcat(result, roman[2]);
      num -= 500;
    }
    else if(num >= 400){
      strcat(result, roman[3]);
      num -= 400;
    }
    else if(num >= 100){
      strcat(result, roman[4]);
      num -= 100;
    }
    else if(num >= 90){
      strcat(result, roman[5]);
      num -= 90;
    }
    else if(num >= 50){
      strcat(result, roman[6]);
      num -= 50;
    }
    else if(num >= 40){
      strcat(result, roman[7]);
      num -= 40;
    }
    else if(num >= 10){
      strcat(result, roman[8]);
      num -= 10;
    }
    else if(num >= 9){
      strcat(result, roman[9]);
      num -= 9;
    }
    else if(num >= 5){
      strcat(result, roman[10]);
      num -= 5;
    }
    else if(num >= 4){
      strcat(result, roman[11]);
      num -= 4;
    }
    else if(num >= 1){
      strcat(result, roman[12]);
      num -= 1;
    }
  }

  return result;
}

int main() {
  
  printf(" %s\n", intToRoman(1994));

  return 0;
}
