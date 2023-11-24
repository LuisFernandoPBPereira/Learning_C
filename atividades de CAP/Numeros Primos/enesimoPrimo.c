int enesimoPrimo(int n){
  int i=0, contPrimos=0, divisores=0, result, primo=2;

  while(contPrimos < n)
  {
    for(i=1; i <= primo; i++)
    {
      if(primo % i == 0)
      {
        divisores++;
      }
    }
    if(divisores == 2)
    {
      contPrimos++;
    }
    
    divisores=0;
    result = primo;
    primo++;
  }

  return result;
  
}

int main() {

  int posPrimo;
  
  printf("Digite a posicao do numero primo:\n");
  scanf("%d" , &posPrimo);
  
  printf("O %dº numero primo eh: %d\n", posPrimo, enesimoPrimo(posPrimo));

}