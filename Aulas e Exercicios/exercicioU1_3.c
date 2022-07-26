//programa para aplicação de desconto usando switch-case

#include <stdio.h>

int main(){
  
  char x;
  float valor, desc, total;

  printf("\nDigite o valor da compra: ");
  scanf("%f", &valor);
  
  printf("\nDigite a letra que representa o seu desconto de acordo com a cor: ");
  
  printf("\n a. azul");
  printf("\n v. vermelha");
  printf("\n b. branco");

  printf("\nDigite a opção: ");
  scanf("%s", &x);

  switch(x){

    case 'a':
    printf("\nVocê selecionou a cor azul, o desconto será de 30 porcento");
      desc = 30;
    break;

    case 'v':
    printf("\nVocê selecionou a cor vermelha, o desconto será de 20 porcento");
    desc = 20;
    break;

    case 'b':
    printf("\nVocê selecionou a cor branca, o desconto será de 10 porcento");
    desc = 10;
    break;

    default:
    printf("\nOpção invalida, não será concedido desconto\n");
    desc = 0;
  }

  total = valor - (valor * desc / 100);
  printf("\nO valor da sua compra é R$ %.2f", total);

  return 0;
  
}