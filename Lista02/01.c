// Questão 1) Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
#include <stdio.h>
int main() {
  int ano, mes, dia, total;
  printf("Diga sua idade no seguinte formato: AA MM DD\n");
  scanf("%d %d %d", &ano, &mes, &dia);
  total = (ano * 365) + (mes * 30) + dia;
  printf("Sua idade total em dias é:%d\n", total);
  return 0;
}