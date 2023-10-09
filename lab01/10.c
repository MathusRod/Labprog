#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14

//Questão 10: Lê o raio de um círculo e mostre como saída o perímetro (2*π*Raio) e a área (π*Raio²).

int main(){

    float raio;

    puts("Qual o valor do raio?");
    scanf("%f", &raio);

    printf("\nO valor do perímetro desse círculo é: %.2fcm.\n\nO valor da área desse círculo é: %.2fcm².\n", (2*PI*raio), (PI*pow(raio,2)));

    return 0;
}