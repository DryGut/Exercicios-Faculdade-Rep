/*
 * calcular o salário liquido levando
 * em consideração os descontos de INSS
 * e IR conforme tabela abaixo
 *   
 *   SALARIO BRUTO(R$)            ALIQUOTA/INSS
 *   
 *   até 1.045,00                      7,5%
 *   de 1.045,00 até 2.089,60          9%
 *   de 2.089,60 até 3.134,40          12%
 *   acima de 3.134,40                 14%
 *
 *  SALARIO BRUTO(R$)             ALIQUOTA/IR
 *   
 *   até 1.903,98                      -
 *   de 1.903,98 até 2.826,65         7,5%
 *   de 2.826,65 até 3.751,05         15,0%
 *   de 3.751,05 até 4.664,68         22,5%
 *   acima de 4.664,68                27,5%
 */

#include <stdio.h>

int main(){

  float salario_bruto, desc_inss, desc_ir, salario_liquido;

  printf("\nCálculo de Salário Líquido com descont do IR e INSS");
  printf("\nDigite seu salário bruto: ");
  scanf("%f", &salario_bruto);

  //calculo para desconto do INSS
  if(salario_bruto <= 1045.0){
    desc_inss = salario_bruto * 0.075;
  
  }else if(salario_bruto > 1045.0 && salario_bruto == 2089.60){
    desc_inss = salario_bruto * 0.09;
  
  }else if(salario_bruto > 2089.60 && salario_bruto == 3134.40){
    desc_inss = salario_bruto * 0.12;
  
  }else{
    desc_inss = salario_bruto * 0.14;
  }

  //calculo do desconto do IR
  if(salario_bruto <= 1903.98){
    desc_ir = 0; 
  
  }else if(salario_bruto <= 2826.65){
    desc_ir = salario_bruto * 0.075;
  
  }else if(salario_bruto <= 3751.05){
    desc_ir = salario_bruto * 0.15;
  
  }else if(salario_bruto <= 4664.68){
    desc_ir = salario_bruto * 0.225;
  
  }else{
    desc_ir = salario_bruto * 0.275;
  }
  
  salario_liquido = salario_bruto - desc_inss - desc_ir;
  
  printf("\nDesconto INSS: R$ %.2f", desc_inss);
  printf("\nDesconto IR: %.2f", desc_ir);
  printf("\nSalario liquido: R$ %.2f", salario_liquido);
  
  return 0;
}

/*
 * Problema:
 * um pizzaria oferta descontos conforme o dia da semana
 * sendo assim as segundas o desconto é de 30%, enquanto 
 * na terça o desconto é de 40%, na quarta a pizza é em
 * dobro, na quinta, 20%, na sexta, 10%, no sábado não há
 * desconto e domingo ganha um refrigerante gratis
 * conforme o problema apresentando, construir um programa
 * que conforme opção selecionada reproduza a oferta do dia.
 */

#include <stdio.h>

int main(){

  int dia_da_semana;
  float valor_do_pedido, desc, total;

  printf("\nInsira o Valor do Pedido: ");
  scanf("%f", &valor_do_pedido);
  
  printf("\nSelecione a opção desejada\n");
  
  printf("\n[1] Domingo");
  printf("\n[2] Segunda");
  printf("\n[3] Terça");
  printf("\n[4] Quarta");
  printf("\n[5] Quinta");
  printf("\n[6] Sexta");
  printf("\n[7] Sábado");
  printf("\nOpção: ");
  
  scanf("%d", &dia_da_semana);
  
  if(dia_da_semana == 1){
    printf("\nAos Domingos o Refrigerante é Gratis");
  
  }else if(dia_da_semana == 2){
    desc = valor_do_pedido * 0.3;
    total = valor_do_pedido - desc;
    printf("\nO valor do seu pedido com a promoção do dia foi: R$ %f.2", total);
  
  }else if(dia_da_semana == 3){
    desc = valor_do_pedido * 0.4;
    total = valor_do_pedido -  desc;
    printf("\nO valor do seu pedido com a promoção do dia foi: R$ %.2f", total);
  
  }else if(dia_da_semana == 4){
    printf("\nA promoção de hoje é clone de pizza");
  
  }else if(dia_da_semana == 5){
    desc = valor_do_pedido * 0.2;
    total = valor_do_pedido - desc;
    printf("\nO valor do seu pedido com a promoção do dia foi: R$ %.2f", total);
  
  }else if(dia_da_semana == 6){
    desc = valor_do_pedido * 0.1;
    total = valor_do_pedido - desc;
    printf("\nO valor do seu pedido com a promoção do dia foi: R$ %.2f", total);
  
  }else{
    printf("\nAos Sábados não há promoção disponível");
  }

  return 0;
}