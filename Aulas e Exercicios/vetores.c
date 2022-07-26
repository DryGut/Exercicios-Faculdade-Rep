/*vetores são estruturas de dados conhecido
como variáveis compostas */
#include <stdio.h>

int main(){
  float altura[3] = {1, 1.5, 1.7};

  printf("\nVetor altura[0] = %.1f", altura[0]);
  printf("\nVetor altura[1] = %.1f", altura[1]);
  printf("\nVetor altura[2] = %.1f", altura[2]);

  return 0;
}

//outra forma de inicializar vetores
#include <stdio.h>

int main(){
  
  float altura[3];
  altura[0] = 1.50;
  altura[1] = 1.80;
  altura[2] = 2.02;

  printf("\nVetor altura[0] = %.2f", altura[0]);
  printf("\nVetor altura[1] = %.2f", altura[1]);
  printf("\nVetor altura[2] = %.2f", altura[2]);

  return 0;
}

//guardando valores em vetores conforme entrada de dados do usuario

#include <stdio.h>

int main(void){
  //utiliza-se zeros para não salvar lixo em memória
  int idade[3] = {0, 0, 0};
  float media = 0.0;

  printf("\nInforme a idade da pessoa 1: ");
  scanf("%d", &idade[0]);

  printf("\nInforme a idade da pessoa 2: ");
  scanf("%d", &idade[1]);

  printf("\nInforme a idade da pessoa 3: ");
  scanf("%d", &idade[2]);

  media = (idade[0] + idade[1] + idade[2]) / 3;
  printf("\nMédia de idade = %.2f", media);

  return 0;
}

//utilizando vetores para armazenar strings

#include <stdio.h>

int main(){

  char nome[16];
  printf("\nDigite o nome: ");
  scanf("%s", nome);
  printf("\n Nome digitado: %s", nome);
}