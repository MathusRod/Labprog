#include <stdio.h>

// Questão 12: Calcule o valor de uma prestação em atraso, utilizando a fórmula: PRESTAÇÃO = VALOR + (VALOR * (TAXA/100) * TEMPO).

int main(){

    int tempo;
    float taxa,valor, prestacao;

    puts("Qual o valor?");
    scanf("%f", &valor);
    puts("Qual a taxa?");
    scanf("%f", &taxa);
    puts("Qual o tempo de atraso?(tempo em dias)");
    scanf("%i", &tempo);

    prestacao = valor + (valor * (taxa/100) * tempo);

    printf("Pretação: %.1f.\n", prestacao);

    return 0;
}