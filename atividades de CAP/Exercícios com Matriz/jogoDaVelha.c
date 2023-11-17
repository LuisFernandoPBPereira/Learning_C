/*
  Esta função verifica a vitória de ambos os jogadores,
  passando como parâmetro a matriz com o placar do jogo
  e o jogador atual.
*/
int verificaVitoria(char placar[3][3], char jogador){
  int vitoria=0;

  /*
    Nos if's, é verificado a posição dos símbolos colocados, estando na posição
    horizontal, vertical e ou diagonal, a variável "vitoria" recebe o valor 1 (true)
  */
  if(placar[0][0] == jogador && placar[0][1] == jogador && placar[0][2] == jogador){
    vitoria=1;
  }
  else if(placar[1][0] == jogador && placar[1][1] == jogador && placar[1][2] == jogador){
    vitoria=1;
  }
  else if(placar[2][0] == jogador && placar[2][1] == jogador && placar[2][2] == jogador){
    vitoria=1;
  }
  else if(placar[0][0] == jogador && placar[1][1] == jogador && placar[2][2] == jogador){
    vitoria=1;
  }
  else if(placar[0][2] == jogador && placar[1][1] == jogador && placar[2][0] == jogador){
    vitoria=1;
  }
  else if(placar[0][0] == jogador && placar[1][0] == jogador && placar[2][0] == jogador){
    vitoria=1;
  }
  else if(placar[0][1] == jogador && placar[1][1] == jogador && placar[2][1] == jogador){
    vitoria=1;
  }
  else if(placar[0][2] == jogador && placar[1][2] == jogador && placar[2][2] == jogador){
    vitoria=1;
  }
  //Aqui retornamos vitoria, que recebe o valor 1 (true) ou 0 (false)
  return vitoria;
}


/*
  Esta função mostra o placar do jogo atualizado
*/
void mostraJogo(char placar[3][3]){
  //l (linha), c (coluna)
  int l, c;
  /*
    A partir daqui, mostramos o placar com as linhas e colunas
    para os jogadores poderem colocar os símbolos nos lugares
    desejados
  */
  printf("\n\n\t  1  2  3\n\n");

  for(l=0; l<3; l++){
    printf("\t%d ", l+1);
      for(c=0; c<3; c++){
        printf("%c ", placar[l][c]);
        if(c<2)
          printf("|");
      }
    printf("\n");
  }
  printf("\n\n");
}

/*
  Esta função é a do jogador 1, recebe como parâmetro a matriz 
  com o placar do jogo e o simbolo do jogador.
*/
void jog1(char placar[3][3], char simbolo){
  //l (linha), c (coluna)
  int l, c;
  
  printf("<<< Jogador 1 >>>\n");
  printf("Onde deseja jogar?\n");
  printf("Digite a linha:\n");
  scanf("%d", &l);
  printf("Digite a coluna:\n");
  scanf("%d", &c);

  //Verifica se o usuário digitou a linha e a coluna corretamente
  if(l<1 || l>3 || c<1 || c>3){
    printf("\nDigite a linha e a coluna corretamente\n");
    mostraJogo(placar);
    jog1(placar, simbolo);
  }
  /*
    Fazemos l-1 e c-1 para o computador entender que a matriz começa em 0.
    
    Caso o jogador tente jogar onde já tenha um símbolo, ele será impedido
    de jogar nesta posição e jogará novamente
  */
  if(placar[l-1][c-1] == 'O' || placar[l-1][c-1] == 'X'){
    printf("\nPOSICAO PREENCHIDA, JOGUE NOVAMENTE!\n");
    //O placar é mostrado de forma atualizada
    mostraJogo(placar);
    //Chamamos a função para o jogador jogar novamente
    jog1(placar, simbolo);
  }
  else{
    /*
      O símbolo é atribuido para a matriz com o placar e 
      a vitória é verificada
    */
    placar[l-1][c-1] =  simbolo;
    verificaVitoria(placar, simbolo);
  }
}

/*
  Esta função é a do jogador 2, recebe como parâmetro a matriz 
  com o placar do jogo e o simbolo do jogador.
*/
void jog2(char placar[3][3], char simbolo){
  //l (linha), c (coluna)
  int l, c;
  
  printf("<<< Jogador 2 >>>\n");
  printf("Onde deseja jogar?\n");
  printf("Digite a linha:\n");
  scanf("%d", &l);
  printf("Digite a coluna:\n");
  scanf("%d", &c);

  //Verifica se o usuário digitou a linha e a coluna corretamente
  if(l<1 || l>3 || c<1 || c>3){
    printf("\nDigite a linha e a coluna corretamente\n");
    mostraJogo(placar);
    jog2(placar, simbolo);
  }
  
  if(placar[l-1][c-1] == 'O' || placar[l-1][c-1] == 'X'){
    printf("\nPOSICAO PREENCHIDA, JOGUE NOVAMENTE!\n");
    mostraJogo(placar);
    jog2(placar, simbolo);
  }
  else{
    placar[l-1][c-1] = simbolo;
    verificaVitoria(placar, simbolo);
  }
}

/*
  Na main, o jogador é escolhido e nela chamamos as funções criadas
  anteriormente.
*/
int main() {
  char jogador1, jogador2;
  char placar[3][3] ={{'-', '-', '-'},{'-', '-', '-'},{'-', '-', '-'}};

  printf("Seja bem-vindo ao:\n\n");
  printf("<<<<<<<<<<< ====================== >>>>>>>>>>>\n\n");
  printf("<<<<<<<<<<< ULTIMATE JOGO DA VELHA >>>>>>>>>>>\n\n");
  printf("<<<<<<<<<<< ====================== >>>>>>>>>>>\n\n");

  /*
    Montamos um loop para caso o jogador digitar algo que não seja
    X ou O, retornar para escolher de forma certa
  */
  while(jogador1 != 'X' || jogador1 != 'O'){
    
    printf("Jogador 1 - Escolha X ou O: \n");
    scanf(" %c", &jogador1);
    
    if(jogador1 == 'X'){
      printf("Jogador 1: X\nJogador 2: O\n");
      jogador2 = 'O';
      break;
    }
    else if(jogador1 == 'O'){
      printf("Jogador 1: O\nJogador 2: X\n");
      jogador2 = 'X';
      break;
    }
    else{
      printf("Digite X ou O\n\n");
    }
  }

  //Enquanto ninguém tiver vencido
  while(verificaVitoria(placar, jogador1) != 1 || verificaVitoria(placar, jogador2) != 1){
    
    mostraJogo(placar);
    jog1(placar, jogador1);

    //Se o jogador 1 ganhou, o loop para e é mostrado que o Jogador 1 ganhou
    if(verificaVitoria(placar, jogador1)==1){
      mostraJogo(placar);
      printf("Jogador 1 ganhou!\n");
      break;
    }
    
    mostraJogo(placar);
    jog2(placar, jogador2);
    
    //Se o jogador 2 ganhou, o loop para e é mostrado que o Jogador 2 ganhou
    if(verificaVitoria(placar, jogador2)==1){
      mostraJogo(placar);
      printf("Jogador 2 ganhou!\n");
      break;
    }
  }
}