//exemplo de uso da biblioteca ctype.h

#include <stdio.h>
#include <ctype.h>
#define NOME_TAM 30

int main(){
  
  char nome[NOME_TAM];
  int i;

  printf("\nDigite o nome do aluno(a): ");
  fgets(nome, NOME_TAM, stdin);
  printf("\nNome ANTES da mudança: %s", nome);

  for(int i = 0; i < NOME_TAM; i++){
    nome[i] = toupper(nome[i]);
  }

  printf("\nNome DEPOIS da mudança: %s", nome);
  return 0;
}

//padronizando CPF

#include <stdio.h>
#include <stdlib.h>

int main(){
  
  char cpf_entrada[15];
  char cpf_corrigido[15];
  int n = 0;

  printf("\nInforme o seu CPF(XXX.XXX.XXX-XX): ");
  scanf("%s", cpf_entrada);

  for(int i = 0; i < 14; i++){
    if(cpf_entrada[i] == '.' || cpf_entrada[i] == '-'){
      continue;
    }
    cpf_corrigido[n] = cpf_entrada[i];
    n++;
  }
  cpf_corrigido[n] = '\0'; //caractere terminador da string
  printf("\nCPF corrigido = %s", cpf_corrigido);
  return 0;
}

//mesmo exercicio usando STRUCT e lançando o tamanho dos arrays em constantes

#include <stdio.h>
#include <stdlib.h>
#define TAM_CPF 15
#define TAM_NOME 50

struct cliente{
char nome[TAM_NOME];
int idade;
char cpf_entrada[TAM_CPF];
char cpf_corrigido[TAM_CPF];
};

int main(){
  
  struct cliente cli;
  int n = 0;
  
  printf("\nInforme seu nome: ");
  fgets(cli.nome, TAM_NOME, stdin);
  printf("\nInforme sua idade: ");
  scanf("%d", &cli.idade);
  printf("\nInforme o seu CPF(XXX.XXX.XXX-XX): ");
  scanf("%s", cli.cpf_entrada);

  for(int i = 0; i < 14; i++){
    if(cli.cpf_entrada[i] == '.' || cli.cpf_entrada[i] == '-'){
      continue;
    }
    cli.cpf_corrigido[n] = cli.cpf_entrada[i];
    n++;
  }
  
  cli.cpf_corrigido[n] = '\0'; //caractere terminador da string
  printf("\nNome: %s", cli.nome);
  printf("\nIdade: %d", cli.idade);
  
  if(cli.idade < 18){
    printf("\nMenor de 18 anos");
  }else{
    printf("\nCPF corrigido = %s", cli.cpf_corrigido);
  }
  
  return 0;
}

//exercicio de calculo de imc


