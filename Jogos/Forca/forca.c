#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "forca.h"

#define MODO_DE_LEITURA "r"
#define MAX_ERROS 6


char palavra[26];
char* tracosDaPalavra = NULL;

char chutesErrados[26];
char chutes[26];

int contChutesErrados = 0;
int contChutes = 0;
int erros = 0;

int jaFoiChutado = 0;
int ganhou = 0;
int enforcou = 0;

char letra;

void CleanStdin(){
  int caracter;
  while((caracter = getchar()) != '\n' && caracter != EOF);
}

void CriaTracosDaPalavra(){
  int tamanho = TamanhoDaPalavra();
  tracosDaPalavra = malloc(sizeof(char) * tamanho);  
}

void EscolhePalavra() {
  FILE *file;
  file = fopen("forca/palavras.txt", MODO_DE_LEITURA);

  int quantidadeDePalavras;
  fscanf(file, "%d", &quantidadeDePalavras);

  srand(time(0));
  int randomico = rand() % quantidadeDePalavras;

  for (int i = 0; i <= randomico; i++) {
    fscanf(file, "%s", palavra);
  }

  fclose(file);
}

int TamanhoDaPalavra(){
  int cont = 1;
  
  while(palavra[cont] != '\0')
    cont++;

  return cont;
}

void InsereTracos(){
  int tamanho = TamanhoDaPalavra();

  for(int i = 0; i < tamanho; i++){
    tracosDaPalavra[i] = '_';
  }
  tracosDaPalavra[tamanho] = '\0';
}

void RecebeChute(){
  printf("\n\nSeu chute: ");
  scanf(" %c", &letra);

  for(int i = 0; i < strlen(chutes); i++){
    if(chutes[i] == letra){
      jaFoiChutado = 1;
      return;
    }
  }
  
  jaFoiChutado = 0;
  chutes[contChutes] = letra;
  contChutes++;
  CleanStdin();
}

int InsereChutesCorretos(){
  int achou = 0;
  
  for(int i = 0; i < strlen(palavra); i++){
    if(letra == palavra[i]){
      tracosDaPalavra[i] = letra;
      achou = 1;
    }
  }

  return achou;
}

void InsereChutesErrados(){ 
  for(int i = 0; i < strlen(chutesErrados); i++){
    if(letra == chutesErrados[i]){
      jaFoiChutado = 1;
      return;
    }
  }

  jaFoiChutado = 0;
  chutesErrados[contChutesErrados] = letra;
  contChutesErrados++;
  erros++;
}

void ImprimePalavraSecreta(){
  int tamanho = TamanhoDaPalavra();

  for(int i = 0; i < strlen(tracosDaPalavra); i++){
    printf("%c ", tracosDaPalavra[i]);
  }
}

void ImprimeChutesCertos(){
  for(int i = 0; i < strlen(chutes); i++){
    for(int j = 0; j < strlen(palavra); j++){
      if(chutes[i] == palavra[j]){
        printf("\033[1;32m%c \033[0m", palavra[j]);
        break;
      }
    }
  }
}

void ImprimeChutesErrados(){
  for(int i = 0; i < strlen(chutesErrados); i++){
    printf("\033[1;31m%c \033[0m", chutesErrados[i]);
  }
}

void VerificaChute(){
  if(jaFoiChutado) printf("\n\nEsta letra já foi chutada!\n");
}

int Ganhou(){
  for(int i = 0; i < strlen(tracosDaPalavra); i++){
     if(tracosDaPalavra[i] == '_')
       return 0;
  }
  ganhou = 1;
  
  return ganhou;
}

int Enforcou(){
  if(erros >= MAX_ERROS){
    enforcou = 1;
    
    return enforcou;
  };

  return 0;
}

void ImprimeForca(){
  system("clear");
  
  printf("  _____________        \n");
  printf("  |/          |        \n");
  printf("  |          %c%c%c    \n", (erros >= 1 ? '(' : ' '), 
                                      (erros >= 1 ? '_' : ' '),
                                      (erros >= 1 ? ')' : ' '));
  
  printf("  |          %c%c%c    \n", (erros >= 2 ? '\\' : ' '),
                                      (erros >= 2 ? '|' : ' '),
                                      (erros >= 3 ? '/' : ' '));
  
  printf("  |           %c       \n", (erros >= 4 ? '|' : ' '));
  
  printf("  |          %c %c     \n", (erros >= 5 ? '/' : ' '),
                                      (erros >= 6 ? '\\' : ' '));
  printf("  |                    \n");
  printf("  |                    \n\n\n");

  printf("Chutes Certos: ");
  ImprimeChutesCertos();
  printf("\n");
  printf("Chutes Errados: ");
  ImprimeChutesErrados();
  printf("\n");
  
  ImprimePalavraSecreta();
  VerificaChute();
  if(enforcou){
    printf("\n\nVoce perdeu! Tente novamente!\n");
    printf("A palavra certa era: %s\n", palavra);
  }

  if(ganhou){
    printf("\n\nParabens, voce ganhou!!!\n");
  }
}

void Executa(){
  EscolhePalavra();
  CriaTracosDaPalavra();
  InsereTracos();

  do{
    ImprimeForca();
    RecebeChute();
    int chuteCerto = InsereChutesCorretos();
  
    if(!chuteCerto){
      InsereChutesErrados();
    }
  }
  while(!Ganhou() && !Enforcou());
  
  ImprimeForca();
  free(tracosDaPalavra);
}