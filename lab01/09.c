#include <stdio.h>
// Entre com a base e a altura de um retângulo e mostre os resultados:
// a. Perímetro (Perímetro é igual à soma dos 4 lados)
// b. Área (Área é igual à lado vezes lado)
int main(){
    float base, altura;
    printf("Qual o tamanho da base do retângulo?\n");
    scanf("%f",&base);
    printf("Qual o tamanho da altura do retângulo?\n");
    scanf("%f",&altura);
    printf("O perimetro desse retângulo é: %.1fcm\n\nA área desse retãngulo é: %.1fcm²\n", (base*2 + altura*2), (base*altura));
    return 0;
}