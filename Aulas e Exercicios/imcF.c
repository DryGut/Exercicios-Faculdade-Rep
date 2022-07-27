//programa de decisão calculando imc com a função calcularIMC

/*
 *                  TABELA IMC
 *
 *     REGRA                         SITUAÇÃO
 *   IMC < 18.5                   Abaixo do peso
 * 18.5 <= IMC < 24.9               Peso Ideal
 *   IMC >= 24.9                    Sobrepeso
 */

#include <stdio.h>

float calcularIMC(){
  float imc, peso, altura;

  printf("\nInsira seu peso: ");
  scanf("%f", &peso);
  printf("\nInsira sua altura: ");
  scanf("%f", &altura);
  
  imc = peso / (altura*altura);
  
  return imc;
}

int main(){

  float imc = calcularIMC();

  if(imc < 18.5){
    printf("\nO funcionario encontra-se abaixo do peso.");
  } else if(imc <= 24.9){
    printf("\nO funcionario esta no peso ideal.");
  }else{
    printf("\nO funcionario esta com sobrepeso");
  }
  return 0;
}