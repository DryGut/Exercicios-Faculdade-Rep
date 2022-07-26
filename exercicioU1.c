/*resolução do problema apresentado na unidade 1
 *
 * programa de gerenciamento de uma locadora de filmes
 *   
 * 
 *
 */

#include <stdio.h>

/*define uma constante para o tamanho da variavel
que recebera o nome do cliente */

#define TAM_NOME_CLIENTE 100 

//cria a estrutura do dados do cliente

struct cliente{
char nome[TAM_NOME_CLIENTE];
int idade;
};

//cria a estrutura para dados dos filmes
struct filme{
int classificacao_filme;
int esta_disponivel;
};

int main(){
  //define as estruturas a serem utilizadas
  struct cliente cli;
  struct filme fi; 

  printf("\nInforme o nome do cliente: ");
  fflush(stdin);
  fgets(cli.nome, TAM_NOME_CLIENTE, stdin);

  printf("\nInforme a idade do cliente: ");
  scanf("%d", &cli.idade);

  printf("\nInforme a classificação do filme: ");
  scanf("%d", &fi.classificacao_filme);

  printf("\nInforme (0) se o filme não está disponível e (1) caso contrário: ");
  scanf("%d", &fi.esta_disponivel);
  
  printf("\nCliente: %s", cli.nome);
  printf("\nIdade: %d anos", cli.idade);
  printf("\nClassificação do filme: %d anos", fi.classificacao_filme);
  printf("\nEsta diponivel: %d", fi.esta_disponivel);
  
  printf("\nFilme pode ser locado pelo cliente: %d", 
    (fi.esta_disponivel) && 
    (cli.idade >= fi.classificacao_filme));
  
  printf("\nAnos restantes: %d", 
    (cli.idade < fi.classificacao_filme) * 
    (fi.classificacao_filme - cli.idade));
  
  return 0;
}