#include <stdio.h>
int main(){
  float x;
  printf("Digite o valor da conta:\n");
  scanf("%f",&x);
  printf("Esse restaurante cobra 10%\n");
  printf("A conta deu: %.2f",x*1.1);
  return 0;
  
}