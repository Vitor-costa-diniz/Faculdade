#include <stdio.h>
int main(){
  float x;
  printf("Digite um número real:\n");
  scanf("%f",&x);
  printf("O número real com uma casa decimal é:%.1f",x);
  return 0;
}