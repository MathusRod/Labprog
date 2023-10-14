// QUESTÃO 07:Foi feita uma pesquisa para saber o perfil dos alunos que cursam o ginásio de uma determinada escola. Cada aluno fornecia a sua série (primeira-1, segunda-2, terceira-3 e quarta-4), quantos livros liam por mês e se gostavam de fazer redação(Sim-1 ou Não-0). Fazer um programa que leia os dados, calcule e imprima:
//* A quantidade de alunos que está na terceira série;
//* A maior quantidade de livros lidos por um aluno que está na quarta série;
//* A porcentagem de alunos que não gostavam de fazer redação e que estão na terceira série;

#include <stdio.h>

int main() {
  int terceiraSerie=0, livros, aluno, redacao, maiorLivros = 0;
  int naoRedacao=0;

  while (1) {
    puts("Qual a sua série?\n1-Primeira\n2-Segunda\n3-Terceira\n4-Quarta\n0-Para encerrar");
    scanf("%d", &aluno);

    if (aluno == 0) {
      break;
    }

    puts("Você gosta de redação?\n1- Sim\n2- Não");
    scanf("%d", &redacao);
    puts("Quantos livros você lê por mês?");
    scanf("%d", &livros);

    if (aluno == 3) {
      terceiraSerie++;
      if(redacao==2){
        naoRedacao++;
      }
    }
    if (aluno == 4) {
      if (livros > maiorLivros) {
        maiorLivros = livros;
      }
    }
  }

  float porcentagem = ((float)naoRedacao / terceiraSerie) * 100;

  printf("A quantidade de alunos que está na terceira série é: %d\n", terceiraSerie);
  printf("A maior quantidade de livros lidos por um aluno da quarta série: %d\n", maiorLivros);
  printf("Porcentagem de alunos da terceira série que não gostam de redação: %.1f%", porcentagem);

  return 0;
}
