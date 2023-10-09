#include <stdio.h>
//Questão 02: Mostrar a média aritmética entre 3 números passados pelo usuário.
int main(){
    float n1,n2,n3;
    printf("Digite um número:");
    scanf("%f",&n1);
    printf("Digite outro número:");
    scanf("%f",&n2);
    printf("Digite o terceiro número:");
    scanf("%f",&n3);
    printf("Média dos 3 números fornecidos:%.2f\n", (n1+n2+n3)/3);
    return 0;
}