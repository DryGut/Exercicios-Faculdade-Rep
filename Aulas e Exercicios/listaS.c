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
}

//função para saber se um elemento existe na lista

bool existe(struct Lista* li, int item){

  assert(li != NULL);
  struct No* aux = li->inicio;
  while(aux != NULL){
    if(aux->info == item){
      return true;
    }
    aux = aux->proximo;
  }
  return false;
}

//função para buscar a menor posição numa lista

int posicao_menor(struct Lista* li){

  assert(li != NULL);
  struct No* aux - li->inicio;
  int pos_menor = 0, menor = aux->info;
  for(int i=0; i<li->tamanho; i++){
    if(aux->info < menor){
      pos_menor = i;
      menor = aux->info;
    }
    aux = aux->proximo;
  }
  return pos_menor;
}