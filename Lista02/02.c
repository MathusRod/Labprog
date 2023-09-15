// Questão 2) Faça um programa que leia dois valores nas variáveis A e B respectivamente,  troque o valor contido na variável A pelo valor em B, e o valor em B pelo valor em A,  isto é, imprimiremos A e B com os valores trocados.
#include <stdio.h>
int main() {
  int a, b, c;
  puts("Diga o valor de A e o valor de B");
  scanf("%d %d", &a, &b);
  printf("VALORES ANTIGOS: A = %d\tB = %d\n", a, b);
  c = a;
  a = b;
  b = c;
  printf("VALORES TROCADOS: A = %d\tB = %d\n", a, b);
  return 0;
}