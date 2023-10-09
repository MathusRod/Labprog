#include <stdio.h>

//Questão 14: Lê um valor de hora e informar quantos minutos se passaram desde o início do dia.

int main(){

    int hora, minutos, mintotal;

    puts("Que hora eh agora?(Digite somende a hora)");
    scanf("%i",&hora);
    puts("Agora digite os minutos.");
    scanf("%i", &minutos);

    mintotal = hora*60 + minutos;

    printf("Desde o inicio do dia, ja se passou %i minutos.", mintotal);

    return 0;
}