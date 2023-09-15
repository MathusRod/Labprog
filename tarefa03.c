#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis
    int codCli, codProd, qtdade;
    float precoUnit, valorTotal;

    // Estrutura de repetição para o Cliente receber o Produto Comprado
    printf("\n1. Digite o cod. do cliente ou Digite zero para sair: ");
    scanf("%d", &codCli);

    while (codCli != 0) {
        valorTotal = 0;

        // Estrutura de repetição para o Cliente comprar mais de um Produto
        while (1) {
            printf("\n\t2. Digite o codigo do produto. Digite -1 para encerrar a execucao: ");
            scanf("%d", &codProd);

            if (codProd == -1) {
                break;
            }

            printf("\n\t\t3. Digite a qtdade comprada pelo cliente %d do produto %d: ", codCli, codProd);
            scanf("%d", &qtdade);
            printf("\n\t\t4. Digite o valor unitario do produto %d: ", codProd);
            scanf("%f", &precoUnit);

            float valorProduto = qtdade * precoUnit;
            valorTotal += valorProduto;

            printf("\nProduto %d (Cliente %d): Quantidade: %d, Valor Unitário: R$ %.2f, Valor Total: R$ %.2f\n", codProd, codCli, qtdade, precoUnit, valorProduto);
        }

        printf("\n=====================================================");
        printf("\nO cliente %d deve pagar R$ %.2f", codCli, valorTotal);
        printf("\n=====================================================");
        printf("\n\n1. Digite o codigo do cliente. Digite zero para encerrar a execucao: ");
        scanf("%d", &codCli);
    }

    return 0;
}