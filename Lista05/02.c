//QUESTÃO 02: Faça um programa que solicite ao usuário para digitar valores numéricos inteiros positivos. Encerre a entrada de dados quando for digitado um número negativo ou zero. Calcule a média dos números positivos digitados.

#include <stdio.h>

int main(){
  float x=1, media, soma=0, cont=0;
  while(x>0){
    puts("Digite um valor positivo!");
    scanf("%f", &x);
    if(x>0){
      soma+=x;
      cont++;
    }
  }
  if(cont>0){
    media = soma/cont;
    printf("Media=%.2f\n",media);
  }
  else printf("Nenhum número positivo foi digitado.\n");
  return 0;
}