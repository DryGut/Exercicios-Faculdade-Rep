#include <stdio.h>

int main(){
  float valor1=0, valor2=0;

  //recebe o valor para as variaveis
  printf("Digite o primeiro valor:");
  //recebe o valor e armazena na variavel conforme o tipo
  scanf("%f", &valor1);
  printf("\nDigite o segundo valor:");
  scanf("%f", &valor2);
  //imprime os valores passados com duas casas decimais
  printf("Variavel 1 = %.2f", valor1);
  printf("Variavel 2 = %.2f", valor2);
  
  return 0;
}