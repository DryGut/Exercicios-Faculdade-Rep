/* aula sobre funções
 *
 * sintaxe das funções
 *
 * <tipo de retorno> <nome> (parametros){
     <comando da função>
     <retorno>(não obrigatorio)
  }
 *
 *
 */
#include <stdio.h>
//função calcular.
int calcular(){
  
  float num;
  printf("\nDigite um numero: ");
  scanf("%f", &num);
  return num * num;
}

int main(){
  
  float resultado = 0;
  resultado = calcular(); //chamando a função
  printf("O quadrado do numero digitado e: %.2f", resultado);
  return 0;
}

//função para gerar um array com numeros aleatorios

#include <stdio.h>

/* o asteristico indica um ponteiro
 utilizado para indicar o tipo e alocação em memoria, 
e como estamos trabalhando com array é a unica forma de acessa-lo */

int* gerarRandomico(){ 

  static int r[10];
  int a;

  for(a=0; a<10; a++){
    //o printf foi feito apenas para testar a função, não sendo necessário seu uso
    printf("\nr[%d] = %d", a, r[a]);
    r[a] = rand() % 100;
  }
  return r;
}

int main(){

  int *p;
  int i;

  p = gerarRandomico();

  for(i=0; i<10; i++){
    printf("\np[%d] = %d", i, p[i]);
  }
  return 0;
}

/* utillizando a função MALLOC e o uso do sizeof()
 * a pratica do uso do sizeof() libera o programador 
 * da responsabilidade de determinar a quantidade de
 * memoria que será necessária para cada tipo de dado
 */

#include <stdio.h>
#include <stdlib.h>

int* alocar(){

  int *memoria = (int*) malloc(sizeof(int));
  return memoria;
}

int main(){

  int *num = alocar();

  if(num != NULL){
    printf("\nInforme um numero inteiro: ");
    scanf("%d", num);
    printf("\nNumero informado: %d", *num);
  }
  return 0;
}

/*
 * passagem de parâmetros
 * sintaxe:
 * <tipo de retorno> <nome> (<parametro>){
    <comando da função>
    <retorno>(não obrigatório)
  }
 */

#include <stdio.h>

int somar(int a, int b){
  return a + b;
}

int main(){
  
  int result;
  result = somar(10, 15);
  printf("\nResultado da soma: %d", result);

  return 0;
}

//sem a utilização de ponteiros
#include <stdio.h>


void testar(int n1, int n2){

  n1 = -1;
  n2 = -2;
  printf("\nValores dentro da função testar(): ");
  printf("\nn1 = %d e n2 = %d", n1, n2);
}

int main(){

  int n1 = 10;
  int n2 = 20;
  printf("\nValores antes de chamar a função testar(): ");
  printf("\nn1 = %d e n2 = %d", n1, n2);

  testar(n1, n2);

  printf("\nValores depois de chamar a função testar(): ");
  printf("\nn1 = %d e n2 = %d", n1, n2);

  return 0;
}

//utilizando ponteiros
#include <stdio.h>


void testar(int* n1, int* n2){

  *n1 = -1;
  *n2 = -2;
  printf("\nValores dentro da função testar(): ");
  printf("\nn1 = %d e n2 = %d", *n1, *n2);
}

int main(){

  int n1 = 10;
  int n2 = 20;
  printf("\nValores antes de chamar a função testar(): ");
  printf("\nn1 = %d e n2 = %d", n1, n2);

  testar(&n1, &n2);

  printf("\nValores depois de chamar a função testar(): ");
  printf("\nn1 = %d e n2 = %d", n1, n2);

  return 0;
}

//utilizando funções com array

#include <stdio.h>

void inserir(int a[]){
  int i = 0;
  for(i=0; i<3; i++){
    printf("\nDigite o valor %d: ", i);
    scanf("%d", &a[i]);
  }
}

void imprimir(int b[]){
  int i = 0;
  for(i=0; i<3; i++){
    printf("\nNumero[%d] = %d", i, 2 * b[i]);
  }
}

int main(){
  int numeros[3];
  printf("\nPreenchendo o vetor...\n");
  inserir(numeros);
  printf("\nDobro dos valores informados:");
  imprimir(numeros);
  return 0;
}

//funções recursivas

