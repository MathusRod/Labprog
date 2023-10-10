//QUESTÃO 06:Ler um número inteiro, e verificar ose o número corresponde a um mês válido no calendário e escrever o nome do mês senão escrever uma mensagem "Mês invalido".

#include <stdio.h>

int main(){
    int x;

    puts("Digite um valor!");
    scanf("%d", &x);

    if(x<1 || x>12){
        printf("Mês invalido\n");
    }
    else{
        if(x==1){
            printf("Você digitou o valor que condiz com o mês [Jáneiro]\n");
        }
        else if(x==2){
            printf("Você digitou o valor que condiz com o mês [Janeiro]\n");
        }
        else if(x==3){
            printf("Você digitou o valor que condiz com o mês [Fevereiro]\n");
        }
        else if(x==4){
            printf("Você digitou o valor que condiz com o mês [Março]\n");
        }
        else if(x==5){
            printf("Você digitou o valor que condiz com o mês [Abril]\n");
        }
        else if(x==6){
            printf("Você digitou o valor que condiz com o mês [Maio]\n");
        }
        else if(x==7){
            printf("Você digitou o valor que condiz com o mês [Junho]\n");
        }
        else if(x==8){
            printf("Você digitou o valor que condiz com o mês [Julho]\n");
        }
        else if(x==9){
            printf("Você digitou o valor que condiz com o mês [Setembro]\n");
        }
        else if(x==10){
            printf("Você digitou o valor que condiz com o mês [Outubro]\n");
        }
        else if(x==11){
            printf("Você digitou o valor que condiz com o mês [Novembro]\n");
        }
        else{
            printf("Você digitou o valor que condiz com o mês [Dezembro]\n");
        }
    }

    return 0;
}
