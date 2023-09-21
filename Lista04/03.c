#include <stdio.h>

//QUESTÃO 03: A Secretaria de Meio Ambiente, que controla o índice de poluição, mantém 3 grupos de indústrias que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0,05 até 0,29. Se o índice sobe para 0,3 as indústrias do 1st grupo são intimadas a suspenderem suas atividades, se o índice crescer para 0,4 as industrias do 1st e 2nd grupo são intimadas a suspenderem suas atividades, se o índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Faça um programa que leia o índice de poluição.

int main(){

    float indice;

    puts("Informe o índice de poluição:");
    scanf("%f", &indice);

    if(indice>=0.05 & indice<=0.29){
        printf("O índice está dentro do aceitável!\n");
    }
    else if(indice>=0.3 & indice<0.4){
            printf("As indústrias do primeiro grupo serão intimados a suspenderrem suas atividades!\n");
    }
        else if(indice>=0.4 & indice<0.5){
                printf("As indústrias do primeiro e segundo o grupo serão intimados a suspenderrem suas atividades!\n");
        }
            else if(indice>=0.5){
                printf("Todas os grupos deverão ser notificados a paralisarem suas atividades!\n");
            }
    return 0;
}