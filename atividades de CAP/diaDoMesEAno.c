#include <stdio.h>
#include <ctype.h>

int main(void) {
  int dia, mes, ano;
  char anoBissexto;
  printf("Insira o dia: \n");
  scanf("%d", &dia);
  printf("Insira o mes (em numero): \n");
  scanf("%d", &mes);
  printf("Insira o ano: \n");
  scanf("%d", &ano);
  
  
  switch(mes){
    case 1:
      dia < 1 || dia > 31 ? printf("Dia incorreto\n") :
      printf("%d de Janeiro de %d\n", dia, ano);
      break;
    case 2:
      if(dia == 29){
        printf("O ano eh bissexto? (S / N)\n");
        scanf(" %c", &anoBissexto);
        toupper(anoBissexto) == 'S' ? printf("%d de Fevereiro de %d\n", dia, ano):
        printf("Dia incorreto\n");
      }
      else{
        dia < 1 || dia > 28 ? printf("Dia incorreto\n") :
        printf("%d de Fevereiro de %d\n", dia, ano); 
      }  
      break;
    case 3:
      dia < 1 || dia > 31 ? printf("Dia incorreto\n") :
      printf("%d de Março de %d\n", dia, ano);
      break;
    case 4:
      dia < 1 || dia > 30 ? printf("Dia incorreto\n") :
      printf("%d de Abril de %d\n", dia, ano);
      break;
    case 5:
      dia < 1 || dia > 31 ? printf("Dia incorreto\n") :
      printf("%d de Maio de %d\n", dia, ano);
      break;
    case 6:
      dia < 1 || dia > 30 ? printf("Dia incorreto\n") :
      printf("%d de Junho de %d\n", dia, ano);
      break;
    case 7:
      dia < 1 || dia > 31 ? printf("Dia incorreto\n") :
      printf("%d de Julho de %d\n", dia, ano);
      break;
    case 8:
      dia < 1 || dia > 31 ? printf("Dia incorreto\n") :
      printf("%d de Agosto de %d\n", dia, ano);
      break;
    case 9:
      dia < 1 || dia > 30 ? printf("Dia incorreto\n") :
      printf("%d de Setembro de %d\n", dia, ano);
      break;
    case 10:
      dia < 1 || dia > 31 ? printf("Dia incorreto\n") :
      printf("%d de Outubro de %d\n", dia, ano);
      break;
    case 11:
      dia < 1 || dia > 30 ? printf("Dia incorreto\n") :
      printf("%d de Novembro de %d\n", dia, ano);
      break;
    case 12:
      dia < 1 || dia > 31 ? printf("Dia incorreto\n") :
      printf("%d de Dezembro de %d\n", dia, ano);
      break;
    default:
      printf("Mes inexistente\n");
  }
  return 0;
}