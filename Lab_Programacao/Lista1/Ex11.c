#include<stdio.h>
int main(){
  float cot,real;
  printf("Digite a cotação do dólar:\n");
  scanf("%f",&cot);
  printf("Digite o valor em real a ser convertido para dólar:\n");
  scanf("%f",&real);
  printf("O valor em dólar depois da conversão é: %.2f $",real/cot);
  return 0;
}