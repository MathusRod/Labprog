#include <stdio.h>
//Questão 04: Lê dois números e mostra a soma. Ante do resultado, deverá aparecer a mensagem:SOMA.
int main(){
    int n1,n2;
    printf("Digite um número:");
    scanf("%i", &n1);
    printf("Digite outro número:");
    scanf("%i", &n2);
    printf("SOMA: %i\n", n1+n2);
    return 0;
}