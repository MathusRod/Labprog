//QUESTÃO 06:Foi realizada uma pesquisa com 200 pessoas que assistiram uma peça de teatro, em relação a sua opinião sobre a mesma. Cada espectador respondeu a um questionário que solicitava os seguintes dados:
//  idade da pessoa;
//  o identificador da pessoa;
//  opinião em relação à peça(de 0 a 10).
// Faça um programa que, a partir destes dados, calcule e imprima:
// a.A quantidade de respostas 10.
// b.A média de idade das pessoas que responderam o questionário.
// c.A percentagem de pessoas que responderam 5 ou menos para a opinião da peça.
// d.O identificador da pessoa mais velha.
// * Considere que a maior idade não é repetida.

#include <stdio.h>

int main() {
    int quantidadeRespostas10 = 0;
    int totalIdade = 0;
    int totalPessoas = 0;
    int maiorIdade = 0;
    int identificadorMaisVelho = 0;
    int idade, identificador, opiniao;
    float mediaIdade,percentagemOpiniao5OuMenos;

    printf("Digite os dados dos espectadores:\n");

    for (int i = 1; i < 201; i++) {

        printf("Identificador da pessoa %d: ", i);
        scanf("%d", &identificador);

        printf("Idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Opinião em relação à peça (de 0 a 10) da pessoa %d: ", i);
        scanf("%d", &opiniao);

        if (opiniao == 10) {
            quantidadeRespostas10++;
        }
        if (opiniao <= 5) {
            percentagemOpiniao5OuMenos++;
        }

        totalIdade += idade;
        totalPessoas++;

        if ((idade > maiorIdade) || (i==1)) {
            maiorIdade = idade;
            identificadorMaisVelho = identificador;
        }
    }

    mediaIdade = (float)totalIdade / totalPessoas;

    percentagemOpiniao5OuMenos = (percentagemOpiniao5OuMenos / totalPessoas) * 100;

    printf("\nResultado:\n");
    printf("a) Quantidade de respostas 10: %d\n", quantidadeRespostas10);
    printf("b) Média de idade das pessoas que responderam o questionário: %.2f\n", mediaIdade);
    printf("c) Percentagem de pessoas que responderam 5 ou menos para a opinião da peça: %.2f%%\n", percentagemOpiniao5OuMenos);
    printf("d) Identificador da pessoa mais velha: %d\n", identificadorMaisVelho);

    return 0;
}
