#include<stdio.h>
int main(){
  float r;
  printf("Digite o valor do raio do círculo:\n");
  scanf("%f",&r);
  printf("O seu diâmetro é: %.2f\n",2*r);
  printf("A sua circunferência é: %.2f\n",2*r*3.14159);
  printf("A sua área é: %.2f\n",3.14159*(r*r));
  return 0;
  
}