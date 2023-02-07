// Escreva um programa que leia um vetor do usu ́ario e imprima seus valores e seus endereços.

#include <stdio.h>
#define TAM 5

int main(){
  int v[TAM], *p1;
  for(int i; i<TAM; i++){
    p1 = &v[i];
    printf("Digite um valor para o vetor:\n");
    scanf("%d",p1);
    puts("");
    printf("O valor %d é %d\n",i,*p1);
    printf("O seu endereço é: %p\n",p1);
  }
  return 0;
}