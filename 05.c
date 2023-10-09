#include <stdio.h>
//Questão 05: Lê um número e mostra a terça parte deste número.
int main(){
    float n1;
    printf("Digite um número:");
    scanf("%f", &n1);
    printf("A terça parte de [%.1f] é: %.1f.\n",n1,n1/3);
    return 0;
}