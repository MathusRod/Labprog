//QUESTÃO 05: Um vendedor necessita de um programa que calcule o preço total devido por um cliente. O programa deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo. Mostrar uma mensagem no caso de código inválido.
//Código produto -------- Preço unitário
//    1001       --------    R$ 5,32
//    1324       --------    R$ 6,45
//    6548       --------    R$ 2,37
//     987       --------    R$ 5,32
//    7623       --------    R$ 6,45

#include <stdio.h>


int main(){
    int codigoProduto, quantidadeProduto;
    float valorTotal;

    printf("Qual produto você quer comprar?\n");
    printf("Código do produto -------- Preço unitário\n");
    printf("       1001       --------    R$ 5,32\n");
    printf("       1324       --------    R$ 6,45\n");
    printf("       6548       --------    R$ 2,37\n");
    printf("       987        --------    R$ 5,32\n");
    printf("       7623       --------    R$ 6,45\n");
    scanf("%d", &codigoProduto);
    if((codigoProduto==1001) || (codigoProduto==1324) || (codigoProduto==6548) || (codigoProduto==987) || (codigoProduto==7623)){
        printf("Qual a quantidade de produtos que você deseja comprar?\n");
        scanf("%d", &quantidadeProduto);
        if(codigoProduto==1001){
            valorTotal = 5.32*quantidadeProduto;
        }
        else if(codigoProduto==1324){
            valorTotal = 6.45*quantidadeProduto;
        }
        else if(codigoProduto==6548){
            valorTotal = 2.37*quantidadeProduto;
        }
        else if(codigoProduto==987){
            valorTotal = 5.32*quantidadeProduto;
        }
        else{
            valorTotal = 6.45*quantidadeProduto;
        }
        printf("Você comprou %d produtos de código %d, que lhe custou %.2f R$.", quantidadeProduto, codigoProduto, valorTotal);
    }
    else {
        printf("Você digitou um código inválido!");
    }
    return 0;
}
