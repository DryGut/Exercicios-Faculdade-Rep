//definindo estruturas "struct"

#include <stdio.h>

struct automovel{
char modelo[20];
int ano;
float valor;
};

int main(){
  
  struct automovel dadosAutomovel1;
  strcpy(dadosAutomovel1.modelo, "Argo");
  dadosAutomovel1.ano = 2022;
  dadosAutomovel1.valor = 15.000;

  printf("%s\n%d\n%.3f", 
    dadosAutomovel1.modelo,
    dadosAutomovel1.ano,
    dadosAutomovel1.valor);
}