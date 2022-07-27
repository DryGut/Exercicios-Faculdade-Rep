/*
 * PROBLEMA:
 * utilizando uma matriz 3x5 em que cada linha
 * representa um horario de voo e cada coluna
 * representa uma poltrona(0 para livre e 1 para ocupada
 * e -1 se estiver indisponivel).
 * 
 * I - o primeiro horario disponibiliza 4 poltronas com apenas a 4ª livre
 * II - o segundo horario conta com 5 poltronas e todas estão ocupadas 
 * III - e o terceiro horario tem apenas 2 poltronas e todas as 2 livres
 *
 */

#include <stdio.h>


int main(){

  int mat[3][5] = {
  1, 1, 1, 0, -1,
  1, 1, 1, 1, 1,
  0, 0, -1, -1, -1
  };

  int opcao;
  int numVoo;
  int reservou;

  do{
    printf("\n[1] - Reservar Voo?:\n[2] - Sair\nInforme a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao){

      case 1:
      printf("\nInforme o Numero do voo(1 - 3): ");
      scanf("%d", &numVoo);
      reservou = 0;
      if(numVoo >= 1 && numVoo <= 3){
        for(int i = 0; i < 5 && reservou == 0; i++){
          
          if(mat[numVoo - 1][i] == 0){
            reservou = 1;
            mat[numVoo - 1][i] = 1;
          }
        }
        if(reservou == 1){
          printf("\nSeu voo foi reservado com sucesso!");
        }else{
          printf("\nNão há poltronas disponiveis nesse voo!");
        }
      }else{
        printf("\nOpção invalida");
      }
      break;

      case 2:
      printf("\nSaindo...");
      break;

      default:
      printf("\nOpção invalida");
    }
  }while(opcao != 2);
  return 0;
}