//QUESTÃO 03: Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe a quantidade de números ímpares e pares lidos. Calcule também a soma dos números pares e a média dos números ímpares.

#include <stdio.h>

int main(){
  int x;
  int par=0,impar=0, somaPar,somaImpar;
  float media;

  for(int k=0; k<10;k++){
    puts("Digite um valor!");
    scanf("%d",&x);

    if(x%2==0){
      par++;
      somaPar+=x;
    }
    else{
      impar++;
      somaImpar+=x;
    }
  }
  media = (float)somaImpar/impar;

  printf("A quantidade de pares foram %d\n", par);
  printf("A quantidade de ímpares foram %d\n", impar);
  printf("A soma de todos os pares foram %d\n", somaPar);
  printf("A média de todos os ímpares foram %.2f\n", media);
  return 0;
}