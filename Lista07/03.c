//QUESTÃO 03:Faça um programa que leia uma string digitada pelo usuário (máximo 20 caracteres) e imprima na tela o número de vogais existente nesta string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char string[21];
  int i, vogais = 0;

  printf("Digite uma string (máximo de 20 caracteres): ");
  fgets(string, sizeof(string), stdin);

  for (i = 0; i < strlen(string); i++) {
    char upperCase = toupper(string[i]); 
    if (upperCase == 'A' || upperCase == 'E' || upperCase == 'I' || upperCase == 'O' || upperCase == 'U') {
       vogais++;
    }
  }

  printf("Número de vogais na string: %d\n", vogais);

  return 0;
}
