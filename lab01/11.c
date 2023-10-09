#include <stdio.h>

//Questão 11: Calcule e mostre a área de um triângulo (área é igual a (base x altura) dividido por 2)

int main(){

    float base, altura;

    printf("Qual o tamanho da base do triãngulo?\n");
    scanf("%f",&base);
    printf("Qual o tamanho da altura do triãngulo?\n");
    scanf("%f",&altura);

    printf("\nA área desse triãngulo é: %.1fcm²\n", (base*altura)/2);

    return 0;
}