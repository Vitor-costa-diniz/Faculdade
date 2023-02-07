#include<stdio.h>
#include<stdlib.h>
int main(){
  int x;
  printf("Digite um valor:\n");
  scanf("%d",&x);
  printf("O valor em módulo é %d",abs(x));
  return 0;  
}