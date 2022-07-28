//criando uma pilha ligada

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

//criando as struct que serão usadas na pilha
struct No{
int info;
struct No* proximo;
};

struct Pilha{
struct No* topo;
int tamanho;
};

//função que criará a pilha

struct Pilha* criar(){
  //alocando a struct Pilha na memoria
  struct Pilha* nova_pilha = (struct Pilha*) malloc(sizeof(struct Pilha));

  if(nova_pilha != NULL){ //alinhando os ponteiros da pilha
    nova_pilha->topo = NULL;
    nova_pulha->tamanho = 0;
  }
  return nova_pilha; //retornando o endereço de memoria da pilha
}

//função de inserir elementos na Pilha
void empilhar(struct Pilha* p, int item){

  assert(p != NULL);
  struct No* novo_no = (struct No*) malloc(sizeof(struct No));

  if(novo_no != NULL){
    novo_no->info = item;
    novo->proximo = p->topo;
    p->topo = novo_no;
    p->tamanho++;
  }
}

//função para retirada de elementos da Pilha
int desempilhar(struct Pilha* p){

  assert(p != NULL);
  assert(p->topo != NULL);
  struct No* aux = p->topo;
  int elemento = aux->info;
  p->topo = aux->proximo;
  p->tamanho--;
  free(aux);
  return elemento;
}

//função para verificar o tamanho da pilha
int tamanho(struct Pilha* p){

  assert(p != NULL);
  return p->tamanho;
}

//função que verifica o elemento do topo da pilha
int topo(struct Pilha* p){
  
  assert(p != NULL);
  assert(p->topo != NULL);
  struct No* topo = p->topo;
  return topo->info;
}

//função para verificar se a pilha esta vazia
bool vazia(struct Pilha* p){

  assert(p != NULL);
  return (p->topo == NULL);
}

//função esvaziar a pilha e liberar a memoria
void liberar(struct Pilha* p){

  assert(p != NULL);
  while(vazia(p) == false){
    desempilhar(p);
  }
  free(p);
}

//função para combinação
bool combina(char c1, char c2){

  switch(c1){
    case ')': return c2 == '(';
    case '}': return c2 == '{';
    case ']': return c2 == '[';
    default: return false;
  }
}

//função para validar expressões
bool validar(char exp[], int tam){

  struct Pilha* p = criar();
  for(int i=0; i<tam; i++){
    char c = exp[i];
    switch(c){
      case '(':
      case '{':
      case '[': empilhar(p, c); break;
      case ')':
      case '}':
      case ']':{
        if(vazia(p) == true) return false;
        if(combina(c, desempilhar(p)) == false) return false;
      }
    }
  }
  return (vazia(p));
}

//função para clonar uma pilha
struct Pilha* clonar(struct Pilha* p){

  assert(p != NULL);
  struct Pilha* clone = criar();
  struct Pilha* aux = criar();

  while(vazia(p) == false){
    empilhar(aux, desempilhar(p));
  }

  while(vazia(aux) == false){
    int elemento = desempilhar(aux);
    empilhar(clone, elemento);
    empilhar(p, elemento);
  }
  liberar(aux);
  return clone;
}
//colocando as funções para "rodar"

/*int main(){
  
  char exp[] = "{([])}";
  printf("Resultado (1 = Correta; 0 = Incorreta): %d\n", validar(exp, 6));

  return 0;
}*/
int main(){

  struct Pilha* minha_pilha = criar();

  printf("Está vazia (1 - SIM / 2 - NÃO)? %d\n", vazia(minha_pilha));

  printf("Empilhando 1...\n");
  empilhar(minha_pilha, 1);
  printf("Empilhando 2...\n");
  empilhar(minha_pilha, 2);
  printf("Empilhando 3...\n");
  empilhar(minha_pilha, 3);

  printf("Está vazia (1 - SIM / 2 - NÃO)? %d\n", vazia(minha_pilha));

  printf("Topo = %d\n", topo(minha_pilha));
  printf("Tamanho = %d\n", tamanho(minha_pilha));

  printf("Desempilhando Elementos: ");
  printf("%d", desempilhar(minha_pilha));
  printf("%d", desempilhar(minha_pilha));
  printf("%d", desempilhar(minha_pilha));

  liberar(minha_pilha);
  return 0;
}

