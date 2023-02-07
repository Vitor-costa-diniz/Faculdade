#include <stdio.h>
int main(){
  int x;
  printf("Digite um número inteiro:\n");
  scanf("%d",&x);
  printf("O triplo de %d é: %d, o quadrado: %d, e a metade é: %d",x,x*3,x*x,x/2);
  
  return 0;
}