#include <stdio.h>
int main(){
  int a,b ;   
  printf("Digite o número 1:\n");
  scanf("%d",&a);
  printf("Digite o número 2:\n");
  scanf("%d",&b);
  a = a ^ b; 
  b = a ^ b;
  a = a ^ b;
  printf("a = %d, b = %d \n",a,b);
  return 0;
}