//QUESTÃO 05:Em uma pesquisa de campo, uma editora solicitou os seguintes dados para os entrevistados: sexo, idade e quantidade de livros que leu no ano de 2006. Faça um programa que leia os dados digitados pelo usuário, sendo que deverão ser solicitados dados até que a idade digitada seja um valor negativo. Depois, calcule e imprima:
//a) A quantidade total de livros lidos pelos entrevistados menores de 10 anos.
//b) A quantidade de mulheres que leram 5 livros ou mais.
//c) A média de idade dos homens que leram menos que 5 livros.
//d) O percentual de pessoas que não leram livros.

#include <stdio.h>

int main() {
    int idade, quantidadeLivros, totalLivrosMenores10 = 0;
    int mulheres5ouMais = 0, totalIdadeHomens = 0, homensMenos5 = 0, totalPessoas = 0, pessoasNaoLeram = 0;
    char sexo;

    printf("Digite os dados dos entrevistados:\n");

    while (1) {
        printf("\nSexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm') {
            printf("Idade: ");
            scanf("%d", &idade);
            printf("Quantidade de livros lidos em 2006: ");
            scanf("%d", &quantidadeLivros);

            totalIdadeHomens += idade;

            if (quantidadeLivros < 5) {
                homensMenos5++;
            }
        } else if (sexo == 'F' || sexo == 'f') {
            printf("Idade: ");
            scanf("%d", &idade);
            printf("Quantidade de livros lidos em 2006: ");
            scanf("%d", &quantidadeLivros);

            if (quantidadeLivros >= 5) {
                mulheres5ouMais++;
            }
        } else {
            break; // Sai do loop se um sexo inválido for digitado
        }

        totalPessoas++;

        if (quantidadeLivros == 0) {
            pessoasNaoLeram++;
        }

        if (idade < 10) {
            totalLivrosMenores10 += quantidadeLivros;
        }
    }

    if (totalPessoas > 0) {
        float mediaIdadeHomens = (float)totalIdadeHomens / (totalPessoas - mulheres5ouMais);
        float percentualNaoLeram = (float)pessoasNaoLeram / totalPessoas * 100;

        printf("\nResultado:\n");
        printf("a) Quantidade total de livros lidos por entrevistados menores de 10 anos: %d\n", totalLivrosMenores10);
        printf("b) Quantidade de mulheres que leram 5 livros ou mais: %d\n", mulheres5ouMais);
        printf("c) Média de idade dos homens que leram menos de 5 livros: %.2f\n", mediaIdadeHomens);
        printf("d) Percentual de pessoas que não leram livros: %.2f%%\n", percentualNaoLeram);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}