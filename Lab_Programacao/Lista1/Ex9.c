#include<stdio.h>
int main(){
  int x;
  printf("Digite um número inteiro:\n");
  scanf("%d",&x);
  printf("A antecessor de %d é %d e o sucessor é %d.\n",x,x-1,x+1);
  return 0;
}