//gerando senhas aleatorias através da entrada de dados do usuário

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_FRASE 100
#define TAM_SENHA 8

char* gerarSenha(){

  int maxTamFrase = TAM_FRASE + 1; //considerar o encerramento da string
  int tamSenha = TAM_SENHA + 1; //considerar o encerramento da string

  char strFrase[maxTamFrase];
  char* strSenha = (char*) malloc(sizeof(char) * tamSenha);

  printf("\nEntre com uma frase sem espaços: ");
  fflush(stdin);
  fgets(strFrase, maxTamFrase, stdin);

  int tamFrase = strlen(strFrase); //qtd de caracteres da frase informada
  srand(time(NULL)); //usa uma nova seed para gerar numeros aleatorios(rand)

  for(int i=0; i<TAM_SENHA; i++){
    int nAleatorio = rand() % tamFrase;
    strSenha[i] = strFrase[nAleatorio];
  }
  strSenha[tamSenha] = '\0';
  return strSenha;
}

int main(){
  char* senha = gerarSenha();
  printf("\nSenha gerada: %s", senha);
}