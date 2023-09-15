//Questão 5) Faça um programa que leia A, B e C e calcule a seguinte fórmula: (7*C+5*B) /  (2*A*3), armazenando-a na variável Result.
#include <stdio.h>
int main(){
  float a, b, c;
  float result;
  puts("Digite o valor de A, B e C:");
  scanf("%f %f %f", &a, &b, &c);
  result = (7*c+5*b) /  (2*a*3);
  printf("O resultado é: %.2f.\n", result);
  return 0;
}