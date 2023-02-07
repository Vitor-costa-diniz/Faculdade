#include <stdio.h>
int main (){
  int *p1 = NULL,*p2 = NULL,p3,num = 10;
  p1 = &num;
  p2 = &num;
  p3 = *p1+*p2;
  printf("A soma é %d\n",p3);
  printf("O endereço da soma é: %p",&p3);// x mostrar o endereço
  return 0;
}