//Questão 3) Faça um programa que leia cinco números inteiros, calcule e escreva a soma, o  produto e a média dos números lidos. 
#include <stdio.h>
int main(){
  int n1, n2, n3, n4, n5;
  int soma, produto;
  float media;
  puts("Digite 5 valores inteiros:");
  scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
  soma = n1 + n2 + n3 + n4 + n5;
  produto = n1 * n2 * n3 * n4 * n5;
  media = (float)(soma) / 5;
  printf("Soma: %d\nProduto: %d\nMédia: %.2f\n", soma, produto, media);
  return 0;
}