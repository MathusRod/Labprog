// 8. Uma empresa realizou uma pesquisa com os seus fornecedores, na qual foram coletados os seguintes dados referentes aos produtos fornecidos:
//  ID, Valor e Percentual de aumento
// Obs. Se o produto não tiver sofrido alteração de preço, o percentual de aumento será igual a 0.
// Faça um programa que determine e escreva:
//  O novo valor de cada um dos produtos.
//  A quantidade de produtos mais caros que R$ 100,00 (após aumento) e que tiveram aumento superior a 5%.
//  A média de valor dos produtos que não sofreram aumento.
//  O valor do produto mais caro (após aumento).

// Obs.: o programa solicita dados até que o ID digitado seja zero.

#include <stdio.h>

int main(){

  int id,cont=0;
  float valor, percentualAumento, novoValor;
  float maiorValor=0, acimaCem=0, media=0,NaoAumento=0;
  
  while(1){
    printf("Qual o ID?\nDigite 0 para encerrar\n");
    scanf("%d",&id);
    if (id == 0) {
      break;
    }
    printf("Informe o valor do produto: ");
    scanf("%f", &valor);
    printf("Informe o percentual de aumento (em %%): ");
    scanf("%f", &percentualAumento);
    novoValor = valor + (valor * percentualAumento / 100);
    printf("O novo valor do produto é: %.2f\n", novoValor);
    if(novoValor==valor){
      NaoAumento+=valor;
      cont++;
    }
    if(novoValor>maiorValor){
      maiorValor=novoValor;
    }
    if((novoValor>100)&&(percentualAumento>5)){
      acimaCem++;
    }
  }
  if(cont>0)media=NaoAumento/cont;
  
  printf("A quantidade de produtos acima de 100R$ com porcentagem de aumento supeior a 5 é: %.0f\n", acimaCem);
  printf("O maior valor registrado foi: %.2f\n", maiorValor);
  printf("A média dos valores dos produtos que não tiveram aumento é: %.2f\n", media);
  
  return 0;
}
