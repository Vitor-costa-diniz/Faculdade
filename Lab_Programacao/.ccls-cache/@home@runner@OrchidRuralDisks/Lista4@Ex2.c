//Escreva um programa que troque o valor de dois números utilizando ponteiros.
#include <stdio.h>
#include <stdlib.h>
int main(){
  int a;int b;  int *p1; int *p2; int **p3;
  p1 = &a;
  p2 = &b;
  puts("Digite o primeiro valor:");
  scanf("%d",p1);
  puts("Digite o segundo valor:");
  scanf("%d",p2);
  **p3 = *p1;
  *p1 = *p2;
  *p2 = **p3; 
  printf("O primeiro valor agora é:%d\n",*p1);
  printf("O endereço de memória do primeiro valor é: %p\n",p1);
  printf("O segundo valor agora é:%d\n",*p2);
  printf("O endereço de memória do segundo valor é: %p\n",p2);
  
  return 0;
}