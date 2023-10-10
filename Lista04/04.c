//QUESTÃO 04: Um Banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito.
//Saldo médio -------- Percentual
//de 0 a 200,00 ------ nenhum crédito (crédito = 0)
//de 201,00 a 400,00 - 20% do valor do saldo médio
//de 401,00 a 600,00 - 30% do valor do saldo médio
//acima de 600,00 ---- 40% do valor do saldo médio

#include <stdio.h>


int main(){
    float saldoMedio, credito;

    puts("Quanto foi seu saldo médio do último ano?");
    scanf("%f", &saldoMedio);

    if(saldoMedio<=200){
        credito = 0;
        printf("O seu saldo é de %.2f R$\nEntão você receberá %.2f R$ de crédito", saldoMedio, credito);
    }
    else if(saldoMedio<=400){
        credito = saldoMedio * 0.2;
        printf("O seu saldo é de %.2f R$\nEntão você receberá %.2f R$ de crédito", saldoMedio, credito);
    }
    else if(saldoMedio<=600){
        credito = saldoMedio * 0.3;
        printf("O seu saldo é de %.2f R$\nEntão você receberá %.2f R$ de crédito", saldoMedio, credito);
    }
    else{
        credito = saldoMedio * 0.4;
        printf("O seu saldo é de %.2f R$\nEntão você receberá %.2f R$ de crédito", saldoMedio, credito);
    }

    return 0;
}
