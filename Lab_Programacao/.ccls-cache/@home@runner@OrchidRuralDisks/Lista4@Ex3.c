// Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor valor fornecido.

#include <stdio.h>
int main(void){
  int d = 0, a = 0, cont = 0,*p1 = NULL, *p2 = NULL;
  char c = 'S';
  while (c == 'S'){
    p1 = &d;
    p2 = &a;
    puts("Digite um número inteiro:");
    scanf("%d",p1);
    if (cont == 0){
      *p2 = *p1;
    }
    cont +=1;
    if (*p2 > *p1){
      *p2 = *p1;
    }
    printf("O menor valor digitado ate agora foi: %d\n",*p2);
    printf("Deseja continuar ? [S/N]");
    scanf(" %c",&c);
    
    }
  return 0;
}