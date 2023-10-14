//QUESTÃO 04:Faca um programa q pergunte ao usuário o numero de alunos a ser lido. O tamanho dos vetores será o numero informado pelo usuário. Armazene num vetor as notas G1 destes alunos; num outro vetor, armazene as notas G2 destes alunos. Ambas notas, G1 e G2, são informadas pelo usuário. Calcule a media aritmética destes alunos e armazene num terceiro vetor. Ao final, mostre as 3 notas dos alunos.

#include <stdio.h>

int main() {
    int numeroAlunos;

    printf("Digite o número de alunos: ");
    scanf("%d", &numeroAlunos);

    float g1[numeroAlunos], g2[numeroAlunos], medias[numeroAlunos];

    for (int i = 0; i < numeroAlunos; i++) {
        printf("Digite a nota G1 do aluno %d: ", i + 1);
        scanf("%f", &g1[i]);
        printf("Digite a nota G2 do aluno %d: ", i + 1);
        scanf("%f", &g2[i]);
        medias[i] = (g1[i] + g2[i]) / 2;
    }

    printf("\nNotas dos Alunos:\n");
    for (int i = 0; i < numeroAlunos; i++) {
        printf("Aluno %d - G1: %.2f, G2: %.2f, Média: %.2f\n", i + 1, g1[i], g2[i], medias[i]);
    }

    return 0;
}
