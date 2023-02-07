#include<stdio.h>
int main(){
  float x,F;
  printf("Digite a temperatura em Celsius\n");
  scanf("%f",&x);
  F = (9 * x+160)/5;
  printf("A temperatura em fahrenheit é: %.2f",F);
  return 0;
  
}