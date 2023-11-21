/*
    1. Que um programa em Java que implemente as seguintes funções:
    a) totalPares: a função recebe como parâmetro um array de inteiros e retorna um
    número inteiro indicando o total de números pares existentes no array.
    b) maiorValor: a função recebe como parâmetro um array de inteiros e retorna o maior
    número existente no array.
    c) totalIguais: a função recebe como parâmetro dois arrays de inteiros e retorna o total
    de números iguais existentes em ambos os arrays. Em seguida, crie a
    função principal do programa para testar as funções criadas em arrays definidos
    estaticamente ou informados pelo usuário
*/

int totalPares(int nums[]){
  int i, pares=0;
  for(i=0; i<10; i++){
    if(nums[i]%2==0){
      pares++;
    }
  }
  return pares;
}

int maiorValor(int nums[]){
  int i, maior=0;

  for(i=0; i<10; i++){
    if(nums[i]>maior){
      maior = nums[i];
    }
  }

  return maior;
}

int totalIguais(int nums[], int nums2[]){
  int i, iguais=0;

  for(i=0; i<10; i++){
    if(nums[i]==nums2[i]){
      iguais++;
    }
  }
  
  return iguais;
}

int main() {
  int nums[10] = {1,2,3,4,5,6,7,8,9,10};
  int nums2[10] = {1,2,3,4,5,6,7,8,9,2};
  
  int pares = totalPares(nums);
  int maior = maiorValor(nums);
  int iguais = totalIguais(nums, nums2);
  
  printf("Numeros pares: %d\n", pares);
  printf("Maior numero: %d\n", maior);
  printf("Numeros iguais: %d\n", iguais);

}