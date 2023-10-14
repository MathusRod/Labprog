// QUESTÃO 02: Armazene num vetor de 5 posições o salário de 5 pessoas. Se o
// salário for menor q 1000 reais, forneça um aumento de 10% e sobrescreva o
// valor antigo. Ao final, mostre a lista de salários atualizada.

#include <stdio.h>
#define TAM 5
int main() {

  float salarios[TAM];

  for (int i = 0; i < TAM; i++) {
    printf("Digite o %d o salário: ", i + 1);
    scanf("%f", &salarios[i]);
    if (salarios[i] < 1000) {
      salarios[i] = salarios[i] * 1.1;
    }
  }
  for (int i = 0; i < TAM; i++) {
    printf("Salário %d: %.2f\n", i + 1, salarios[i]);
  }

  return 0;
}
