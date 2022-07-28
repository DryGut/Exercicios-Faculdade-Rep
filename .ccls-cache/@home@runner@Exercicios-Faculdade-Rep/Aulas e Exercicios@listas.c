//aula sobre estruturas de dados

//lista simplismente ligada

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//struct para o nó da lista
struct No{
int info; //dados que serão inseridos na lista
struct No* proximo; //estrutura que apontará para o proximo nó
};

//struct da lista propriamente dita
struct Lista{
struct No* inicio; //ponteiro para o primeiro nó da lista
int tamanho; //tamanho da lista
};

//função para a criação da lista
struct Lista* criar(){
  
  struct Lista* nova_lista = (struct Lista*) malloc(sizeof(struct Lista)); //alocando memoria para lista

  if(nova_lista != NULL){
    nova_lista->inicio = NULL;
    nova_lista->tamanho = 0;
  }
  return nova_lista;
}

//função para verificar se a lista esta vazia
bool vazia(struct Lista* li){
  
  assert(li != NULL); //função assert verifica o estado da lista
  if(li->inicio == NULL){
    return true;
  }else{
    return false;
  }
}

//função para inserir dados na lista
void inserir(struct Lista* li, int pos, int item){
  
  assert(li != NULL); //verifica se o ponteiro "li" não é nulo
  assert(pos >= 0 && pos <= li->tamanho); //verifica a posição que será inserido o elemento

  //instancia um novo nó para armazenar o novo elemento
  struct No* novo_no = (struct No*) malloc(sizeof(struct No));
  novo_no->info = item; //atualizando a variavel info do novo nó

  if(pos == 0){ //verifica se a inserção do elemento é no inicio da lista
    novo_no->proximo = li->inicio;
    li->inicio = novo_no;
  }else{ //inseri um elemento em uma posição qualquer da lista
    struct No* aux = li->inicio;
    for(int i=0; i<pos-1; i++){
      aux = aux->proximo;
    }
    novo_no->proximo = aux->proximo;
    aux->proximo = novo_no;
  }
  li->tamanho++;
}

//função para imprimir os elementos da lista
void imprimir(struct Lista* li){
  
  assert(li != NULL);
  printf("\nLista: ");
  struct No* aux = li->inicio;
  for(int i=0; i<li->tamanho; i++){
    printf("\t%d", aux->info);
    aux = aux->proximo;
  }
}

//função que retorna o tamanho da lista
int tamanho(struct Lista* li){
  assert(li != NULL);
  return li->tamanho;
}

//função para obter o elemento da lista conforme o indice passado
int obter(struct Lista* li, int pos){
  
  assert(li != NULL);
  assert(pos >= 0 && pos < li->tamanho);
  struct No* aux = li->inicio;
  for(int i=0; i<pos; i++){
    aux = aux->proximo;
  }
  return aux->info;
}

//função para remover os elementos da lista conforme o indice passado
int remover(struct Lista* li, int pos){
  
  assert(vazia(li) == false);
  assert(pos >= 0 && pos < li->tamanho);

  struct No* ant = NULL;
  struct No* aux = li->inicio;
  for(int i=0; i<pos; i++){
    ant = aux;
    aux = aux->proximo;
  }
  
  if(ant == NULL){
    li->inicio = aux->proximo;
  }else{
    ant->proximo = aux->proximo;
  }
  
  int elemento = aux->info;
  li->tamanho--;
  free(aux);
  return elemento;
}

//função para esvaziar a lista e liberar memória
void liberar(struct Lista* li){
  while(vazia(li) == false){
    remover(li, 0);
  }
  free(li);
}//lista simplismente ligada

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//struct para o nó da lista
struct No{
int info; //dados que serão inseridos na lista
struct No* proximo; //estrutura que apontará para o proximo nó
};

//struct da lista propriamente dita
struct Lista{
struct No* inicio; //ponteiro para o primeiro nó da lista
int tamanho; //tamanho da lista
};

//função para a criação da lista
struct Lista* criar(){
  
  struct Lista* nova_lista = (struct Lista*) malloc(sizeof(struct Lista)); //alocando memoria para lista

  if(nova_lista != NULL){
    nova_lista->inicio = NULL;
    nova_lista->tamanho = 0;
  }
  return nova_lista;
}

//função para verificar se a lista esta vazia
bool vazia(struct Lista* li){
  
  assert(li != NULL); //função assert verifica o estado da lista
  if(li->inicio == NULL){
    return true;
  }else{
    return false;
  }
}

//função para inserir dados na lista
void inserir(struct Lista* li, int pos, int item){
  
  assert(li != NULL); //verifica se o ponteiro "li" não é nulo
  assert(pos >= 0 && pos <= li->tamanho); //verifica a posição que será inserido o elemento

  //instancia um novo nó para armazenar o novo elemento
  struct No* novo_no = (struct No*) malloc(sizeof(struct No));
  novo_no->info = item; //atualizando a variavel info do novo nó

  if(pos == 0){ //verifica se a inserção do elemento é no inicio da lista
    novo_no->proximo = li->inicio;
    li->inicio = novo_no;
  }else{ //inseri um elemento em uma posição qualquer da lista
    struct No* aux = li->inicio;
    for(int i=0; i<pos-1; i++){
      aux = aux->proximo;
    }
    novo_no->proximo = aux->proximo;
    aux->proximo = novo_no;
  }
  li->tamanho++;
}

//função para imprimir os elementos da lista
void imprimir(struct Lista* li){
  
  assert(li != NULL);
  printf("\nLista: ");
  struct No* aux = li->inicio;
  for(int i=0; i<li->tamanho; i++){
    printf("\t%d", aux->info);
    aux = aux->proximo;
  }
}

//função que retorna o tamanho da lista
int tamanho(struct Lista* li){
  assert(li != NULL);
  return li->tamanho;
}

//função para obter o elemento da lista conforme o indice passado
int obter(struct Lista* li, int pos){
  
  assert(li != NULL);
  assert(pos >= 0 && pos < li->tamanho);
  struct No* aux = li->inicio;
  for(int i=0; i<pos; i++){
    aux = aux->proximo;
  }
  return aux->info;
}

//função para remover os elementos da lista conforme o indice passado
int remover(struct Lista* li, int pos){
  
  assert(vazia(li) == false);
  assert(pos >= 0 && pos < li->tamanho);

  struct No* ant = NULL;
  struct No* aux = li->inicio;
  for(int i=0; i<pos; i++){
    ant = aux;
    aux = aux->proximo;
  }
  
  if(ant == NULL){
    li->inicio = aux->proximo;
  }else{
    ant->proximo = aux->proximo;
  }
  
  int elemento = aux->info;
  li->tamanho--;
  free(aux);
  return elemento;
}

//função para esvaziar a lista e liberar memória
void liberar(struct Lista* li){
  while(vazia(li) == false){
    remover(li, 0);
  }
  free(li);
}

int main(){

  struct Lista* minha_lista = criar();

  inserir(minha_lista, 0, 5);
  inserir(minha_lista, 0, 3);
  inserir(minha_lista, 2, 6);
  inserir(minha_lista, 3, 7);
  imprimir(minha_lista);
  
  return 0;
}

//lista duplamente ligada

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//cria a estrutura dos nós da lista
struct No{
int info;
struct No* anterior;
struct No* proximo;
};

//cria a estrutura da lista propriamente dita
struct ListaDupla{
struct No* inicio;
struct No* fim;
int tamanho;
};

//função para criar a lista
struct ListaDupla* criar(){

  struct ListaDupla* nova_lista = (struct ListaDupla*) malloc(sizeof(struct ListaDupla));

  //instrução para posicionar os ponteiros na lista criada
  if(nova_lista != NULL){
    nova_lista->inicio = NULL;
    nova_lista->fim = NULL;
    nova_lista->tamanho = 0;
  }
  return nova_lista;
}

//função para verificar se a lista esta vazia
bool vazia(struct ListaDupla* li){

  assert(li != NULL);
  if(li->inicio == NULL){
    return true;
  }else{
    return false;
  }
}

//função para esvaziar a lista e liberar memória
void liberar(struct ListaDupla* li){
  while(vazia(li) == false){
    remover(li, 0);
  }
  free(li);
}

//função que retorna o tamanho da lista
int tamanho(struct ListaDupla* li){
  assert(li != NULL);
  return li->tamanho;
}

//função para inserir elementos em lista duplamente ligadas

void inserir(struct ListaDupla* li, int pos, int item){

  assert(li != NULL);
  assert(pos >= 0 && pos <= li->tamanho);

  struct No* novo_no = (struct No*) malloc(sizeof(struct No));
  novo_no->info = item;

  if(pos == 0){ //instrução para inserir no inicio da lista
    novo_no->anterior = NULL;
    novo_no->proximo = li->inicio;
    li->inicio = novo_no;
    
    if(li->fim == NULL){
      li->fim = novo_no;
    }
  
  }else if(pos == li->tamanho){ //irá inserir no fim da lista
    novo_no->anterior = li->fim;
    novo_no->proximo = NULL;
    li->fim->proximo = novo_no;
    li->fim = novo_no;
  
  }else{ //irá inserir o elemento em qualquer posição
    struct No* aux = li->inicio;
    for(int i=0; i<pos - 1; i++){
      aux = aux->proximo;
    }
    //atualiza o ponteiro do nó que esta sendo inserido
    novo_no->anterior = aux;
    novo_no->proximo = aux->proximo;
    aux->proximo = novo_no;
  }
  li->tamanho++; //incrementa o tamanho da lista após cada inserção
}

//função para remover elementos da lista
int remover(struct ListaDupla* li, int pos){

  assert(vazia(li) == false); //verifica se há elementos na lista
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
  int elemento = aux->info;
  li->tamanho--;
  free(aux);
  return elemento;
}

//função para obter os elementos da lista conforme indice passado
int obter(struct ListaDupla* li, int pos){

  assert(li != NULL);
  assert(pos >= 0 && pos < li->tamanho);
  struct No* aux;

  if(pos == 0){
    aux = li->inicio;
  }else if(pos == li->tamanho - 1){
    aux = li->fim;
  }else{
    aux = li->inicio;
    for(int i=0; i<pos; i++){
      aux = aux->proximo;
    }
  }
  return aux->info;
}