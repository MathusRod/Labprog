//QUESTÃO 02:Leia e armazene num vetor de 5 posições o nome dos alunos matriculados na disciplina de Algoritmos I. Considere que a posição do vetor corresponde ao código do aluno.
//A seguir, armazene em 3 vetores as notas N1, N2 e N3 obtidas por estes alunos na disciplina de Algoritmos I, respectivamente. Considere que o índice do vetor corresponde ao código do aluno. Sabendo que a média final de um aluno é definida como a média aritmética entre as 3 notas obtidas, e que um aluno é aprovado se obtiver média igual ou superior a 6.0, mostre para cada aluno:
// - seu nome
// - média final obtida
// - “aprovado” ou “reprovado”

#include <stdio.h>
#include <string.h>

int main() {
  char nomesSobrenomes[5][100];
  double notasN1[5], notasN2[5], notasN3[5];
  double medias[5];

  for (int i = 0; i < 5; i++) {
    printf("Digite o nome e sobrenome do aluno de código %d: ", i);
    scanf(" %[^\n]", nomesSobrenomes[i]);
  }

  for (int i = 0; i < 5; i++) {
    printf("Digite as notas N1, N2 e N3 do aluno de código %d: ", i);
    scanf("%lf %lf %lf", &notasN1[i], &notasN2[i], &notasN3[i]);
  }

  printf("\nResultados:\n");
  for (int i = 0; i < 5; i++) {
    medias[i] = (notasN1[i] + notasN2[i] + notasN3[i]) / 3.0;
    printf("Aluno: %s\n", nomesSobrenomes[i]);
    printf("Média Final: %.2lf\n", medias[i]);
    if (medias[i] >= 6.0) {
      printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
      }
      printf("\n");
  }
  return 0;
}