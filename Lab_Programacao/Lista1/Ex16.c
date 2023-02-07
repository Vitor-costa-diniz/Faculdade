
#include<stdio.h>
int main(){
  float hora_aula,salario,salario_liquido,desconto;
  int hora;
  printf("Digite o valor da hora aula:\n");
  scanf("%f",&hora_aula);
  printf("Digite o número de horas trabalhadas:\n");
  scanf("%d",&hora);
  printf("Digite o desconto do INSS:\n");
  scanf("%f",&desconto);
  salario = hora * hora_aula;
  salario_liquido = salario * (1-(desconto/100));
  printf("O seu salário bruto é %.2f\n",salario);
  printf("O seu salário líquido é %.2f\n",salario_liquido);
  return 0;
}