#include <stdio.h>
//Lê o saldo de uma aplicação e imprima o novo saldo, considerado o reajuste de 1%.
int main(){
    float saldo;
    printf("Qual o valor do seu saldo?\n");
    scanf("%f",&saldo);
    printf("O valor do seu saldo após o reajuste é de: R$%.2f.\n", saldo+saldo*0.01);
    return 0;
}