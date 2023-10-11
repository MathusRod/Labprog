//QUESTÃO 04:Uma determinada empresa armazena para cada funcionário (10 no total) uma ficha contendo o código, o número de horas trabalhadas e o seu no de dependentes. Considerando que: 
//a. A empresa paga 12 reais por hora e 40 reais por dependentes.
//b. Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
//Faça um programa para ler o código, número de horas trabalhadas e número de dependentes de cada funcionário. Após a leitura, escreva qual o código, os valores descontados para cada tipo de imposto e finalmente o salário líquido de cada um dos funcionários.

#include <stdio.h>

int main(){
  int numDependentes, horas;
  float inss, ir, salarioBruto, salarioLiquido;
  
  for(int i=1; i<11; i++){
    printf("Quantos dependentes o funcionário %d possui?\n",i);
    scanf("%d", &numDependentes);
    printf("Quantas horas o fucionário %d trabalha?\n",i);
    scanf("%d", &horas);

    salarioBruto = (12 * (float)horas) * ((float)numDependentes*40);
    inss = salarioBruto * 0.085;
    ir = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - inss - ir;

    printf("FUNCIONÁRIO %d\n", i);
    printf("Número de dependentes: %d\n", numDependentes);
    printf("Quantidade de Horas trabalhadas: %d\n", horas);
    printf("Salário: %.2fR$\n", salarioLiquido);
  }


  return 0;
}