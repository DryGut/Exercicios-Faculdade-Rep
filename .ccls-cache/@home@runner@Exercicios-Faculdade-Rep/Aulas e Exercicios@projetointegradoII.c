#include <stdio.h>
#include <stdlib.h>

//constante para definir o tamanho das strings
#define TAM_S 50
//cria a estrutura do formulário a ser preenchido
struct cadastro{
char name[TAM_S];
char address[TAM_S];
char phone[TAM_S];
};
//função para criar o array
struct cadastro* montar_cad(){
 
  //cria um array e define uma quantidade de índices e sua alocação na memória
  struct cadastro *c = (struct cadastro*) malloc(2*sizeof(struct cadastro));
  /* conforme o valor definido para o índice
   * é usado um loop for para gerar os valores
   * que serão armazenados dentro do escopo da 
   * struct definido anteriormente.
   */
  for(int i=0; i<=1; i++){
    printf("Nome: ");
    fflush(stdin);
    fgets(c[i].name, TAM_S, stdin);
    printf("Endereço: ");
    fflush(stdin);
    fgets(c[i].address, TAM_S, stdin);
    printf("Telefone: ");
    fflush(stdin);
    fgets(c[i].phone, TAM_S, stdin);
  }
  return c;
}
//programa principal
int main(){
  
  struct cadastro *c = montar_cad();
  /* imprime de forma organizada os dados
   * que foram inseridos na função montar_cad() 
   */
  printf("\n###### DADOS PESSOAIS ######");
  for(int i=0; i<2; i++){
    printf("\nNome: %sEndereço: %sTelefone: %s", c[i].name, c[i].address, c[i].phone);
  }
  return 0;
}