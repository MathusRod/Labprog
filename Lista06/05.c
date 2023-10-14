//QUESTÃO 05: Faca um algoritmo q leia e armazene 5 valores inteiros em um vetor Vet1. Leia outros 5 valores inteiros e armazene num vetor Vet2. A partir destes valores lidos, mostre na tela:
//- a soma dos elementos de cada vetor, nas respectivas posições
//- a diferença dos elementos de cada vetor, nas respectivas posições
//- o produto dos elementos de cada vetor, nas respectivas posições
//- a divisão entre os elementos de cada vetor, nas respectivas posições

#include <stdio.h>
#define n 2
int main(){
  int vet1[n], vet2[n];

  for(int i = 0; i < n; i++){
    printf("Digite um valor para o vetor 1: ");
    scanf("%d", &vet1[i]);
  }
  for(int i = 0; i < n; i++){
    printf("Digite um valor para o vetor 2: ");
    scanf("%d", &vet2[i]);
  }
  printf("A soma dos elementos de cada vetor, nas respectivas posições\n");
  for(int i = 0; i < n; i++){
    printf("- Posição [%d]: %d\n", i,vet1[i]+vet2[i]);
  }
  printf("A diferença dos elementos de cada vetor, nas respectivas posições\n");
  for(int i = 0; i < n; i++){
    printf("- Posição [%d]: %d\n", i,vet1[i]-vet2[i]);
  }
  printf("O produto dos elementos de cada vetor, nas respectivas posições\n");
  for(int i = 0; i < n; i++){
    printf("- Posição [%d]: %d\n", i,vet1[i]*vet2[i]);
  }
  printf("A divisão dos elementos de cada vetor, nas respectivas posições\n");
  for(int i = 0; i < n; i++){
    printf("- Posição [%d]: %.1f\n", i, (float)vet1[i]/(float)vet2[i]);
  }
  return 0;
}
