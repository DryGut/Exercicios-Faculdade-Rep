//estrutura de dados Fila.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

//criando a estrutura de nós e da fila propriamente dita

struct No{
int info;
struct No* proximo;
};

struct Fila{
struct No* inicio;
struct No* fim;
int tamanho;
};
//função para criar uma nova fila
struct Fila* criar(){

  struct Fila* nova_fila = (struct Fila*) malloc(sizeof(struct Fila));

  if(nova_fila != NULL){
    nova_fila->inicio = NULL;
    nova_fila->fim = NULL;
    nova_fila->tamanho = 0;
  }
  return nova_fila;
}

//função para inserir os elementos na fila
void enfileirar(struct Fila* f, int item){

  asset(f != NULL);
  struct No* novo_no = (struct No*) malloc(sizeof(struct No));

  if(novo_no != NULL){
    novo_no->info = item;
    novo_no->proximo = NULL;

    if(f->fim != NULL){
      f->fim->proximo = novo_no;
    }else{
      f->inicio = novo_no;
    }
    f-fim = novo_no;
    f->tamanho++;
  }
}

//função remover elementos da fila
int desenfileirar(struct Fila* f){

  assert(f != NULL);
  assert(f->inicio != NULL);
  struct No* aux = f->inicio;
  int elemento = aux->info;
  f->inicio = aux->proximo;
  if(f->inicio == NULL){
    f->fim = NULL;
  }
  f->tamanho--;
  free(aux);
  return elemento;
}

//função para verificar se a fila esta vazia
bool vazia(struct Fila* f){

  assert(f != NULL);
  return(f->inicio == NULL);
}

//função para verificar o tamanho da fila
int tamanho(struct Fila* f){

  assert(f != NULL);
  return f->tamanho;
}

//função que verifica o elemento do inicio da fila
int inicio(struct Fila* f){

  assert(f != NULL);
  assert(f->inicio != NULL);
  return f->inicio->info
}

//função para liberar a memoria e esvaziar a fila
void liberar(struct Fila* f){

  assert(f != NULL);
  while(f->inicio != NULL){
    desenfileirar(f);
  }
  free(f);
}