#include <stdio.h>

//QUESTÃO 02: Leia 3 valores inteiros (X,Y,Z), determine e escreva o menor deles.

int main(){

    int x,y,z;
    puts("Digite o valor de X:");
    scanf("%d", &x);
    puts("Digite o valor de Y:");
    scanf("%d", &y);
    puts("Digite o valor de Z:");
    scanf("%d", &z);

    if(x<y & x<z){
        printf("o valor X [%d] é o menor valor", x);
    }
    else if(y<x & y<z){
        printf("o valor Y [%d] é o menor valor", y);
    }
    else if(z<y & z<x){
        printf("o valor Z [%d] é o menor valor", z);
    }
    else printf("Todos os valores são iguais");

    return 0;
}