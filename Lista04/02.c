#include <stdio.h>

//QUESTÃO 02: Desenvolva um algoritmo que efetue a leitura de três valores para os lados de um triângulo, considerando lados como: A, B e C. O algoritmo deverá verificar se os lados fornecidos forma realmente um triângulo (cada lado é menor que a soma dos outros dois lados). Se for esta condição verdadeira, deverá ser indicado qual tipo de triângulo foi formado: isóceles (dois lados iguais e um diferente), escaleno (todos os lados diferentes) ou equilátero (todos os lados são giuais).

int main(){

    int a,b,c;

    puts("Digite o valor de a:");
    scanf("%d", &a);
    puts("Digite o valor de b:");
    scanf("%d", &b);
    puts("Digite o valor de c:");
    scanf("%d", &c);

    if(a<b+c & b<a+c & c<a+b){
        if(a==b & a==c){
            printf("Esse triãngulo é equilátero!\n");
        }
        else if((a==b & a!=c) || (a==c & a!=b) || (b==c & b!=a)){
                printf("Esse triângulo é isóceles!\n");
            }
            else if(a!=b & a!=c){
                printf("Esse triângulo é escaleno!\n");
            }     
    }
    else{
        printf("Com os valores fornecidos, não é possível forma um triângulo!\n");
    }

    return 0;
}