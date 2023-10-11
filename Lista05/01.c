//QUESTÃO 01: Faça um programa que calcule e escreva o valor de S: S = (1/1)+(3/2)+(5/3)+(7/4)+...+(99/50)

#include <stdio.h>

int main(){
  float a=1,b=1,s=0;

  for(int i=0; i<50; i++){
    s+=a/b;
    a+=2;
    b++;
  }

  printf("Valor de S será:%.2f\n", s);

  return 0;
}