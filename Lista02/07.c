//Questão 7) Faça um programa que leia o número do funcionário, o número de horas  trabalhadas mensais, o valor que recebe por hora e o número de filhos com idade  menor de 14 anos. Calcular e escrever o salário deste funcionário, sendo que cada  filho menor de 14 anos acrescenta 10% do salário. 
#include <stdio.h>
int main(){
  int num_funcionario, horas_mensais, num_filhos;
  float recebimento_por_hora, pagamento_total, pagamento;
  puts("Digite o seu número de funcionário:");
  scanf("%d", &num_funcionario);
  printf("Funcionário %d, diga quantas horas você trabalha no mẽs:\n", num_funcionario);
  scanf("%d", &horas_mensais);
  printf("Agora quanto você recebe por hora?\n");
  scanf("%f", &recebimento_por_hora);
  printf("Diga a quantidade de filhos que você tem menor que 14 anos:\n");
  scanf("%d", &num_filhos);
  pagamento_total = (horas_mensais*recebimento_por_hora);
  pagamento = pagamento_total * 0.1;
  if(num_filhos>0){
    for(int k=0; k<num_filhos; k++){
      pagamento_total= pagamento_total + pagamento;
    }
  }
  printf("Seu salário será de: %.2f reais.\n", pagamento_total);
  return 0;
}