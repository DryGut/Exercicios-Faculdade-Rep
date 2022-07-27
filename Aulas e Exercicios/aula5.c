/* laço de repetição FOR
 * sintaxe:  
 * for(inicialização, condição de parada, incremento) {
 *   comando ou sequencia de comandos; 
 * }
 */

#include <stdio.h>

int main(){

  int x, y;
  //irá gerar y 10x
  for(y = 0; y <= 10; y++){
    printf("\ny = %d", y);
  }
  return 0;
}

//modificando o incremento e buscando multiplos de 2

#include <stdio.h>

int main(){

  int x, y;
  for(y = 0; y <= 10; y+=2){
    printf("\ny = %d", y);
  }
  return 0;
}

//fazendo uma contagem regressiva com FOR

#include <stdio.h>

int main(){

  int contador;
  printf("\nDigite um numero para contagem regressiva: ");
  scanf("%d", &contador);
  
  for(contador; contador >= 1; contador--){
    printf("\n%d", contador);
  }
  return 0;
}

//trabalhando com arrays

#include <stdio.h>
#define VET_TAM 5

int main(){

  int num[VET_TAM];
  
  for(int i = 0; i < VET_TAM; i++){
    printf("\nInsira o numero: ");
    scanf("%d", &num[i]);
    printf("\nO valor digitado foi: %d", num[i]);
  }
  return 0;
}

//preenchendo um array e buscando o indice do numero 

#include <stdio.h>
#define VET_TAM 5

int main(){

  int vetor[VET_TAM];
  int num, i = 0, achou = 0;

  //preenche o array
  for(int i = 0; i < VET_TAM; i++){
    printf("\nPreencha o array: ");
    scanf("%d", &vetor[i]);
  }

  printf("\nInforme o numero a ser encontrado: ");
  scanf("%d", &num);

  while(i < VET_TAM){
    if(vetor[i] == num){
      achou = 1;
      break;
    }
    i++;
  }
  if(achou == 1){
    printf("\nO numero %d foi encontrado na posição %d do vetor", num, i);
  }else{
    printf("\nO numero %d não foi encontrado no vetor", num);
  }
  return 0;
}

//trabalhando com matrizes

#include <stdio.h>


int main(){

  int linha, coluna;
  int matriz[3][3];

  for(linha = 0; linha < 3; linha++){
    for(coluna = 0; coluna < 3; coluna++){
      printf("\nDigitar os valores da matriz para [linha %d, coluna %d]: ", linha + 1, coluna + 1);
      scanf("%d", &matriz[linha][coluna]);
    }
  }
  printf("\nVeja a sua Matriz\n");
  for(linha = 0; linha <= 2; linha++){
    for(coluna = 0; coluna < 3; coluna++){
      printf("%d\t", matriz[linha][coluna]);
    }
    printf("\n");
  }
  return 0;
}