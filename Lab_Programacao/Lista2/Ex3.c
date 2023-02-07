#include <stdio.h>
#define TAM 25
int main()
{
  char s1[TAM];
  int cont = 0;
  printf(" Digite a primeira string: ");
  gets(s1);
  
  for(int i; i<TAM;i++){
    cont = cont + 1;
  }
  printf("O tamanho da string é:%d",cont);
  return 0;
}