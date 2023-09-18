#include <stdio.h>

int main(void) {

  double valor, op, temp;
  int valorInt;
  scanf("%lf", &valor);
  //"valorInt" recebe a variável "valor", transferindo o valor double para int
  valorInt = valor;
  /*
    "temp" recebe "valorInt" para guardar o valor int temporariamente 
    para subtrairmos com o valor informado, sendo assim conseguimos
    calcular as moedas.
  */
  temp = valorInt;
  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", valorInt/100);
  valorInt = valorInt % 100;
  printf("%d nota(s) de R$ 50.00\n", valorInt/50);
  valorInt = valorInt % 50;
  printf("%d nota(s) de R$ 20.00\n", valorInt/20);
  valorInt = valorInt % 20;
  printf("%d nota(s) de R$ 10.00\n", valorInt/10);
  valorInt = valorInt % 10;
  printf("%d nota(s) de R$ 5.00\n", valorInt/5);
  valorInt = valorInt % 5;
  printf("%d nota(s) de R$ 2.00\n", valorInt/2);
  valorInt = valorInt % 2;
  
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", valorInt);
  /*
    "temp" calcula os centavos e multiplica por 100 para termos
    um número sem casas decimais contido em "valorInt" para calcularmos.
  */
  temp = (valor - temp)*100;
  valorInt = temp;

  printf("%d moeda(s) de R$ 0.50\n", valorInt/50);
  valorInt = valorInt % 50;
  printf("%d moeda(s) de R$ 0.25\n", valorInt/25);
  valorInt = valorInt % 25;
  printf("%d moeda(s) de R$ 0.10\n", valorInt/10);
  valorInt = valorInt % 10;
  printf("%d moeda(s) de R$ 0.05\n", valorInt/5);
  valorInt = valorInt % 5;
  printf("%d moeda(s) de R$ 0.01\n", valorInt/1);
  
  return 0;
}