/* estrutura condicional IF-ELSE
 * sintaxe:
 *
 * if(condição){
     primeiro conjunto de instrução
 * } else {
     segundo conjunto de instrução 
 *  }
 */

/* 
 * problema:
 * se João e Maria tiverem juntos o orçamento
 * de mais 10000 ou mais eles poderão fazer
 * uma viagem internacional caso contrário
 * irão fazer uma viagem nacional mesmo 
 */

#include <stdio.h>

int main(){
  float orcamento;
  printf("\nDigite o valor do orcamento para viagem\n");
  scanf("%f", &orcamento);
  if(orcamento >= 10000){
    printf("\nJoão e Maria possuem orçamento para uma viagem internacional");
  }else{
    printf("\nJoão e Maria irão optar por uma viagem nacional");
  }
  return 0;
}

/*
 * um teste condicional utilizando operação
 * matemática
 */

#include <stdio.h>

int main(){
  int num;
  printf("\ndigite um numero inteiro");
  scanf("%d", &num);
  
  if(num % 2 == 0){
    printf("\nO numero é par");
  }else{
    printf("\nO numero é impar");
  }
}

//estrutura condicional switch-case

#include <stdio.h>

int main(){
  
  int n;

  printf("\nDigite (1) para Saldo, (2) para Extrato, (3) para Saque e (4) para Sair: \n");
  scanf("%d", &n);

  switch(n){
    
    case 1:
    printf("\nSaldo");
    break;

    case 2:
    printf("\nExtrato");
    break;

    case 3:
    printf("\nSaque");
    break;

    case 4:
    printf("\nSaindo...");
    break;

    default:
    printf("\nOpção Invalida");
  }
  return 0;
}

//estrutura condicional encadeado

#include <stdio.h>

int main(){
  
  float nota_final;
  
  printf("\nInforme a nota final do aluno: ");
  scanf("%f", &nota_final);

  if(nota_final >= 60){
    printf("\nAprovado");
  }else{
    if(nota_final >= 50){
      printf("\nEm Recuperação");
    }else{
      printf("\nReprovado");
    }
  }
  return 0;
}