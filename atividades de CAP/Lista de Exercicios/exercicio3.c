/*
    3. Crie um programa em Java que implemente a função uniao. Essa função Crie uma função
    recebe como parâmetros dois arrays de inteiros e retorna um novo array contendo a
    união de v1 e v2. Por exemplo, se v1 = {11, 13, 45, 7} e v2 = {24, 4, 16, 81, 10,
    12}, v3 irá conter {11, 13, 45, 7, 24, 4, 16, 81, 10, 12}. Em seguida, crie a
    função principal do programa para chamar a função uniaopassando dois arrays
    informados pelo usuário (ou declarados estaticamente). Em seguida, o programa deve
    exibir na tela os elementos do array resultante.
*/

void uniao(int v1[],int v2[]){
  int i, j, novaUniao[20];

  printf("A uniao dos arrays resulta em: \n");

  for(i=0; i<10; i++){
    novaUniao[i] = v1[i];
    printf("%d ", novaUniao[i]);
  }
  for(i=10, j=0; i<20; i++, j++){
    novaUniao[i] = v2[j];
    printf("%d ", novaUniao[i]);
  }

  printf("\n");
  
}

int main() {

  int v1[10] = {10,20,30,40,50,60,70,80,90,100};
  int v2[10] = {1,2,3,4,5,6,7,8,9,10};

  uniao(v1, v2);
}