/*
    2. Crie um programa em Java que implemente a função valores_entre. Essa função recebe
    como parâmetro um array de inteiros V e retorna um outro array de inteiros contendo
    todos os valores de V que estejam entre o valor mínimo e máximo (que também são
    passados como parâmetro para a função). Em seguida, crie a função principal do
    programa para inicializar um array de inteiros de tamanho 10, exibir esses valores na tela
    e pedir para o usuário digitar o valor mínimo e máximo a ser buscado. Em seguida o
    programa deverá chamar a função valores_entre e exibir na tela os valores resultantes.
    Lembre-se de exibir uma mensagem de erro caso nenhum valor seja encontrado entre o
    mínimo e o máximo
*/

void valores_entre(int V[], int min, int max){
  int i, resultados[10], cont=0;

  for(i=0; i<10; i++){
    if(V[i]>=min && V[i]<=max){
      resultados[cont] = V[i];
      cont++;
    }
  }
  
  if(cont==0){
    printf("ERRO: intervalo minimo e maximo invalido\n");
  }
  else{
    printf("Os valores entre %d e %d sao: \n", min, max);
    for(i=0; i<cont; i++){
      printf("%d ", resultados[i]);
    }
  }
}

int main() {
  int nums[10] = {10,20,30,40,50,60,70,80,90,100};
  int i, min, max;

  for(i=0; i<10; i++){
    printf("%d ", nums[i]);
  }

  printf("\n\n");

  printf("Digite a posicao minima:\n");
  scanf("%d", &min);
  printf("Digite a posicao maxima\n");
  scanf("%d", &max);

  valores_entre(nums, min, max);
}