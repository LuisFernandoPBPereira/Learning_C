
#include <stdio.h>
//Importamos a <string.h> para podermos fazer a comparação entre strings
#include <string.h>

struct Paciente
{
  char *nome;
  int idade;
  char *profissao;
  char *prioridade;
};

void prioridadePaciente(struct Paciente* paciente) 
{ 
  //A função strcmp() compara duas strings e retorna um valor inteiro que indica a diferença entre elas.
  if (paciente->idade > 60 ||
      strcmp(paciente->profissao, "enfermeiro") == 0 ||
      strcmp(paciente->profissao, "medico") == 0 ||
      strcmp(paciente->profissao, "motorista") == 0 ||
      strcmp(paciente->profissao, "motoboy") == 0 ||
      strcmp(paciente->profissao, "atendente") == 0)
  {
      paciente->prioridade = "alta";
  }
  else
  {
    paciente->prioridade = "desconhecida";  
  }
}

int main(void) 
{
  struct Paciente paciente;

  paciente.nome = "Teste";
  paciente.idade = 50;
  paciente.profissao = "desempregado";

  prioridadePaciente(&paciente);
  
  printf("Nome: %s\n", paciente.nome);
  printf("Idade: %d\n", paciente.idade);
  printf("Profissao: %s\n", paciente.profissao);
  printf("Prioridade: %s\n", paciente.prioridade);

}