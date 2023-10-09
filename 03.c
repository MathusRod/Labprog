#include <stdio.h>
// Questão 03: Lê um número e mostra seu sucessor e seu antecessor na tela.
int main(){
    int n;
    printf("Escolha um número:");
    scanf("%i",&n);
    printf("O antecessor do número [%i] é: %i.\n\nO sucessor do número [%i] é: %i.\n", n,n-1,n,n+1);
    return 0;
}