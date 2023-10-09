#include <stdio.h>
#include <math.h>
// Questão 06: Lê dois números e mostre os seguintes resultados:
// a. Dividendo:|| b. Divisor:|| c. Quociente:|| d. Resto (para calcular o resto de uma divisão, utilize o operador MOD (em C:%)
int main(){
    float Divisor,Dividendo,Resto;
    double Quociente;
    printf("Escolha um valor:");
    scanf("%f",&Dividendo);
    printf("Escolha outro valor (OBS:valor != 0!!): ");
    scanf("%f",&Divisor);   
    Quociente = Dividendo / Divisor;
    Resto = fmod(Dividendo, Divisor); //Usei o operador fmod (ensinado na aula), pois com valores do tipo float não daria o valor exato.
    printf("Dividendo -> %.1f\tDivisor -> %.1f\nQuociente -> %.1f\tResto -> %.1lf\n", Dividendo, Divisor, Quociente, Resto);
    return 0;
} 