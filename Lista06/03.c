//QUESTÃO 03: Faca um programa q leia n valores reais. Armazene estes valores num vetor. Ao final, imprima a média aritmética destes valores.
#include <stdio.h>
int main(){
  int n;
  float media, soma = 0;
  
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);
  float vetor[n];

  for(int i=0; i<n;i++){
    printf("Digite o valor %d: ", i+1);
    scanf("%f", &vetor[i]);
    soma += vetor[i];
  }
  media = soma/n;
  printf("Media: %.2f", media);
  return 0;
}
