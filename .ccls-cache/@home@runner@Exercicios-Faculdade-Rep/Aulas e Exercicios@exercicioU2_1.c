/* PROBLEMA:
 * Criar um programa para uma sorveteria
 * que informe ao cliente a quantidade de 
 * calorias existente no tipo de sorvete
 * que o cliente escolheu.
 */

#include <stdio.h>
#define SABORES 100

int main(){

  int i, n;
  char sabor[SABORES];
  
  do{
    
    printf("\n### TABELA NUTRICIONAL POR TIPO DE SORVETE ###");
    printf("\n[1] - Sorvete Tradicional");
    printf("\n[2] - Sorvete Premium");
    printf("\n[3] - Sorvete Light");
    printf("\n[4] - Sorvete Zero Açúcar");
    printf("\nEscolha o tipo de Sorvete: ");
    scanf("%d", &i);
  
  }while(i < 1 && i <= 4);

  switch(i){
    
    case 1:
      n = 140;
      printf("\nDeseja escolher um sabor?: ");
      scanf("%s", sabor);
      printf("\nSorvete Tracional contem: %d Calorias", n);
      printf("\nE o sabor escolhido foi: %s", sabor);
      break;

    case 2:
      n = 210;
      printf("\nDeseja escolher um sabor?: ");
      scanf("%s", sabor);
      printf("\nSorvete Premium contem: %d Calorias", n);
      printf("\nE o sabor escolhido foi: %s", sabor);
      break;

    case 3:
      n = 130;
      printf("\nDeseja escolher um sabor?: ");
      scanf("%s", sabor);
      printf("\nSorvete Light contem: %d Calorias", n);
      printf("\nE o sabor escolhido foi: %s", sabor);
      break;

    case 4:
      n = 115;
      printf("\nDeseja escolher um sabor?: ");
      scanf("%s", sabor);
      printf("\nSorvete Zero Açucar contem: %d Calorias", n);
      printf("\nE o sabor escolhido foi: %s", sabor);
      break;

    default:
      printf("\nOpção inválida");
      break;
  }
  return 0;
}