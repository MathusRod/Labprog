#include <stdio.h>

// Questão 13: Leia o numerador e o denominador de um fração e transforme-o em
// um número decimal.

int main() {

  int numerador, denominador;
  float resultado;

  puts("Diga o numerador.");
  scanf("%i", &numerador);
  puts("Diga o denominador.");
  scanf("%i", &denominador);

  if (denominador != 0) {
    resultado = (float)numerador / denominador;
    printf("A fração %i/%i em decimal é: %.1f", numerador, denominador,
           resultado);
  } else {
    printf("Por favor escolha um denominador diferente de 0.");
  }
  return 0;
}