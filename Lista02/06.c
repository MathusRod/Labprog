//Questão 6) Faça um programa que leia a idade de uma pessoa expressa em dias e mostre-a  expressa em anos, meses e dias. 
#include <stdio.h>
int main(){
  int dias, meses, anos;
  int resto_ano;
  int idade_dias;
  puts("Digite sua idade expressa em dias:");
  scanf("%d", &idade_dias);
  anos = idade_dias/365;
  if(idade_dias%365!=0){
    resto_ano=idade_dias%365;
  }
  meses = resto_ano/30;
  if(resto_ano%30!=0){
    dias=resto_ano%30;
  }
  printf("Sua idade é %d anos, %d meses e %d dias!\n", anos, meses, dias);
  return 0;
}