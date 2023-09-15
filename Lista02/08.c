#include <stdio.h>
//Questão 8) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a  percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).  Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,  escrever um programa em C que leia o custo de fábrica de um carro e escreva o  custo ao consumidor. 
int main(){
  float custo, fabrica;
  printf("Quanto custou para fabricar esse carro?\n");
  scanf("%f", &fabrica);
  custo = (fabrica+(fabrica*0.28)+(fabrica*0.45));
  printf("O custo do consumidor neste carro vai ser de: %.2f reais.\n", custo);
  return 0;
}