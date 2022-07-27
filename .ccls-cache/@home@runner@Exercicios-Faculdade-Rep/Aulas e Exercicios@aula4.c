/* laços de repetição while
 * sintaxe:
 * 
 * while(condição){
 *  comando 1;
 *  comando 2;
 *  comando n;...
 * }
 */

#include <stdio.h>

int main(){
  
  int cont = 0;
  //sera executado enquanto cont for menor que 10
  while(cont < 10){
    printf("\nPROGRAMA");
    //incrementa cont, para que não entre em loop infinito
    cont++
  }
  return 0;
}

//outra forma de laço while

#include <stdio.h>

int main(){
  
  char parar;
  float nota;
  printf("\nDigite a nota final do aluno: ");
  scanf("%f", &nota);

  while(nota < 0 || nota > 10){
    printf("\nNota invalida! Digite a nota final do aluno: ");
    scanf("%f", &nota);
  }
  return 0;
}

/* usando o do-while, este laço testa o bloco de codigo 
antes de entrar na repetição */

#include <stdio.h>

int main(void){

  char parar;
  float nota;

  do{
    printf("\nDigite a nota final do aluno(min: 0, max: 10): ");
    scanf("%f", &nota);
    /*uma instruição if poderia ser colocada para checar se a nota é valida
     * if(nota < 0 || nota > 10){
     *    printf("\nNota invalida");
    }*/
  }while(nota < 0 || nota > 10);
  
  return 0;
}

//mais uma forma de uso do do-while

#include <stdio.h>

int main(void){

  float metragem1, metragem2, resultado;
  int resp;
  metragem1 = 0;
  metragem2 = 0;
  resultado = 0;
  printf("\nCALCULO DE METROS QUADRADOS");

  do{
    printf("\nDigite a primeira metragem do terreno: ");
    scanf("%f", &metragem1);
    printf("\nDigite a segunda metragem: ");
    scanf("%f", &metragem2);
    resultado = metragem1 * metragem2;
    printf("\nO terreno tem = %.2f m2", resultado);
    printf("\nDigite 1 para continuar ou 2 para sair: ");
    scanf("%d", &resp);
  }while(resp == 1);
  return 0;
}

//utilizando instruções com do-while

#include <stdio.h>

int main(void){

  float soma = 0;
  float valor;
  int opcao;

  do{
    printf("\n### MENU DE OPÇÕES ###");
    printf("\n 1. Depósito");
    printf("\n 2. Saque");
    printf("\n 3. Saldo");
    printf("\n 4. Sair");
    printf("\nInforme uma opção: ");
    scanf("%d", &opcao);

    switch(opcao){
      
      case 1:
      printf("\nInforme o valor: ");
      scanf("%f", &valor);
      soma += valor;
      break;

      case 2:
      printf("\nInforme o valor: ");
      scanf("%f", &valor);
      soma -= valor;
      break;

      case 3:
      printf("\nSaldo atual = R$ %.2f", soma);
      break;

      case 4:
      printf("\nSaindo...");

      default:
      printf("\nOpção inválida");
    }
  }while(opcao != 4);
  printf("\nFim das operações!");
  return 0;
}

//do-while calculo de media das notas dos alunos

#include <stdio.h>

int main(){

  int qtd_notas = 0, opcao;
  float nota, media, soma_notas = 0.0;

  do{
    printf("\nDigite a nota do aluno %d: ", qtd_notas + 1);
    scanf("%f", &nota);
    qtd_notas += 1;
    soma_notas += nota;
    printf("\nDigite 1 para informar outra nota ou 2 para encerrar: ");
    scanf("%d", &opcao);
  }while(opcao != 2);

  printf("\nQuantidade de alunos = %d", qtd_notas);
  media = soma_notas / (float) qtd_notas;
  printf("\n Média das notas = %.2f", media);
  
  return 0;
}