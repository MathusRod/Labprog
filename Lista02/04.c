//Questão 4) Faça um programa que leia dois valores inteiros (X e Y) e calcule X na potência Y.  Observação: utilizar a função matemática. 
#include <stdio.h>
#include <math.h>
int main(){
  int x, y;
  puts("Digite o valor de x e y: ");
  scanf("%d %d", &x, &y);
  printf("Resultado de x na potência y: %.0lf\n", pow(x, y));
  return 0;
}