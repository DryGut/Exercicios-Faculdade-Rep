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