// Fa ̧ca um programa em C que leia duas strings do usu ́ario e informe se elas s ̃ao iguais. Fa ̧ca uma versão com o uso da fun ̧c ̃ao strcmp() e outra sem.
#include <stdio.h>
#include <string.h>
#define TAM 20

int main(){
  char palavra1[TAM];
  char palavra2[TAM];
  int ret;
  printf("Digite a primeria palavra: ");
  scanf("%s",palavra1);
  printf("Digite a segunda palavra: ");
  scanf("%s",palavra2);
  ret = strcmp(palavra1,palavra2);
  if(ret == 0){
    printf("As duas palavras são iguais\n");
      }
  else{
    printf("As duas palavras não são iguais\n");
  }
  return 0;
  
}