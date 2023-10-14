//QUESTÃO 01:Faça um algoritmo que leia 10 salários. Depois de lidos e armazenados, mostre o maior valor. Utilize vetores.

#include <stdio.h>
#define TAM 10
int main() {

    float salarios[TAM];
    float maiorSalario;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o %d o salário: ", i + 1);
        scanf("%f", &salarios[i]);
    }

    maiorSalario = salarios[0];

    for (int i = 1; i < TAM; i++) {
        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
        }
    }

    printf("O maior salário é: %.2f\n", maiorSalario);

    return 0;
}
