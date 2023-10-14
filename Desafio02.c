// Construir vetor com Strings:
// Faça um programa que:
// 1. armazene em um vetor de inteiros as quantidades compradas de 5 produtos.
// 2. Informe o nome de cada produt
// 3. Em outro vetor de reais, armazene o valor unitário de cada produto.
// 4. O programa deve, ao final, mostrar o valor total a ser pago por cada produto.
// 5. Exibir o código do produto, considerando que o índice do vetor é o código.

#include <stdio.h>
#include <string.h>

int main() {
    int quantidades[5];
    char produtos[5][50];
    float valores[5];
    float total[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe a quantidade comprada do produto %d: ", i+1);
        scanf("%d", &quantidades[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Informe o nome do produto %d: ", i+1);
        scanf(" %[^\n]", produtos[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Informe o valor unitário do produto %d: ", i+1);
        scanf("%f", &valores[i]);
    }

    for (int i = 0; i < 5; i++) {
        total[i] = quantidades[i] * valores[i];
    }

    printf("\nCódigo do Produto | Valor Total\n");
    for (int i = 0; i < 5; i++) {
        printf("%d - %s | R$ %.2f\n", i+1, produtos[i], total[i]);
    }

    return 0;
}
