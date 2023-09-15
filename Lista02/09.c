//Questão 9) Faça um programa que leia as variáveis y e z. Após, calcule e mostre o valor de x,  dado pela expressão: x = √ (y*(y^22 + z^33))
#include <stdio.h>
#include <math.h>
int main(){
  float x, y, z;
  printf("Qual o valor de y e z?\n");
  scanf("%f %f", &y , &z);
  x = sqrt(y*(pow(y,22)+pow(z,33)));
  printf("Valor de X: %.2f\n", x);
  return 0;
}