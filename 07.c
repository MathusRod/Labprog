#include <stdio.h>
//Questão 07: Leia 4 números e mostre a média ponderada, sabendo-se que os pesos são respectivamente: 1, 2, 3 e 4.
int main(){
    float n1,n2,n3,n4,media_ponderada;
    printf("Digite o primeiro valor:");
    scanf("%f",&n1);
    printf("Digite o segundo valor:");
    scanf("%f",&n2);
    printf("Digite o terceiro valor:");
    scanf("%f",&n3);
    printf("Digite o quarto valor:");
    scanf("%f",&n4);
    media_ponderada = (n1 + n2*2 + n3*3 + n4*4) / 10; 
    printf("A média ponderada é: %.2f", media_ponderada);
    return 0;
}