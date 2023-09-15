#include <stdio.h>
#include <stdlib.h>

//Questão 01: Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

int ano_bissexto(int ano) {
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
        return 1; // Ano bissexto
    } else {
        return 0; // Não é ano bissexto
    }
}

int dias_no_mes(int ano, int mes) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // A posição 0 não é usada, mas está presente para facilitar o acesso.

    if (mes == 2 && ano_bissexto(ano)) {
        return 29; // Fevereiro em ano bissexto
    }

    return days[mes];
}

int main(int argc, char *argv[]) {
	
    int ano, mes, dia; // Idade expressa em anos, meses e dias
    int N_dia, N_mes, N_ano; // Data de nascimento
    int idade_dias = 0;
	int mes_maximo, dia_maximo =0;
	int i,j,k;
	
    printf("Digite sua idade expressa em anos, meses e dias (Ex: 19 08 30):\n");
    scanf("%d %d %d", &ano, &mes, &dia);

    printf("Digite sua data de nascimento (Ex: 19/03/2003):\n");
    scanf("%d/%d/%d", &N_dia, &N_mes, &N_ano);

    // Calcula a idade em dias
    for (i = N_ano; i <= N_ano + ano; i++) {
         mes_maximo = (i == N_ano + ano) ? mes : 12;//Sempre que a condiçao dentro do parentese for falsa mes_maximo recebe +12

        for (j = N_mes; j <= mes_maximo; j++) {
            dia_maximo = (j == mes && i == N_ano + ano) ? dia : dias_no_mes(i, j);
//Se a condiçao dentro do paretense for verdadeira.dentro do paretense for verdadeira,
//entao estamos no mes e no ano certos,entao dia_maximo recebe dia;
//se for falsa entao dia_maximo recebe dias_no_mes(i,j).

            for (k = N_dia; k <= dia_maximo; k++) {
                idade_dias++;
            }

            N_dia = 1; //começa do dia 1
        }

        N_mes = 1; //começa de janeiro
    }

    printf("\nIdade em dias: %d dias\n", idade_dias);

    return 0;
}