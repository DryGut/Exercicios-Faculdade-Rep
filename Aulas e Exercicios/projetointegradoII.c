#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>


#define TAM_CAR 100
//criando os nó da lista
struct No{
char* info;
struct No* anterior;
struct No* proximo;
};
//criando a lista
struct Dados{
struct No* inicio;
struct No* fim;
int tamanho;
};
//estrutura dos usuarios
struct usuario{
char nome[TAM_CAR];
char endereco[TAM_CAR];
char idade;
};

//criando a lista
struct Dados* criar(){

  struct Dados* nova_lista = (struct Dados*) malloc(sizeof(struct Dados));

  if(nova_lista != NULL){
    nova_lista->inicio = NULL;
    nova_lista->fim = NULL;
    nova_lista->tamanho = 0;
  }
  return nova_lista;
}

//verificando se a lista esta vazia
bool vazia(struct Dados* li){

  assert(li != NULL);
  if(li->inicio == NULL){
    return true;
  }else{
    return false;
  }
}

//inserindo dados na lista
void inserir(struct Dados* li, int pos, char item[TAM_CAR]){

  assert(li != NULL);
  assert(pos >= 0 && pos <= li->tamanho);

  struct No* novo_no = (struct No*) malloc(sizeof(struct No));
  novo_no->info = item;

  if(pos == 0){
    novo_no->anterior = NULL;
    novo_no->proximo = li->inicio;
    li->inicio = novo_no;
    if(li->fim == NULL){
      li->fim = novo_no;
    }
  
  }else if(pos == li->tamanho){
    novo_no->anterior = li->fim;
    novo_no->proximo = NULL;
    li->fim->proximo = NULL;
    li->fim = novo_no;
  
  }else{
    struct No* aux = li->inicio;
    for(int i=0; i<pos - 1; i++){
      aux = aux->proximo;
    }
    novo_no->anterior = aux;
    novo_no->proximo = aux->proximo;
    aux->proximo = novo_no;
  }
  li->tamanho++;
}

//removendo elementos da lista
int remover(struct Dados* li, int pos){

  assert(li != NULL);
  assert(pos >= 0 && pos < li->tamanho);
  struct No* aux = NULL;

  if(pos == 0){
    aux = li->inicio;
    li->inicio = aux->proximo;
    if(li->inicio == NULL){
      li->fim = NULL;
    }else{
      li->inicio->anterior = NULL;
    }
  
  }else if(pos == li->tamanho - 1){
    aux = li->fim;
    li->fim = aux->anterior;
    li->fim->proximo = NULL;
  
  }else{
    struct No* ant = NULL;
    aux = li->inicio;
    for(int i=0; i<pos; i++){
      ant = aux;
      aux = aux->proximo;
    }
    ant->proximo = aux->proximo;
    aux->proximo->anterior = ant; 
  }
  char elemento = aux->info;
  li->tamanho--;
  free(aux);
  return elemento;
}

//imprimir os dados da lista
void imprimir(struct Dados* li){

  assert(li != NULL);
  printf("\n###### DADOS PESSOAIS ######\n");
  printf("Nome |\t");
  printf("Endereço |\t");
  printf("Idade\t");
  struct No* aux = li->inicio;
  for(int i=0; i<li->tamanho; i++){
    printf("%s", aux->info);
    aux = aux->proximo;
  } 
}


int main(){

  struct usuario user;
  struct Dados* usuarios = criar();
  
  printf("\nInsira seu nome: ");
  fgets(user.nome, TAM_CAR, stdin);
  printf("\nInsira seu endereco: ");
  fgets(user.endereco, TAM_CAR, stdin);
  printf("\nInsira sua idade: ");
  scanf("%s", &user.idade);
  inserir(usuarios, 0, &user.idade);
  inserir(usuarios, 0, user.endereco);
  inserir(usuarios, 0, user.nome);
  imprimir(usuarios);

  return 0;
}