// Fa ̧ca um programa em C que concatene duas strings recebidas pelo usu ́ario. Construa uma vers ̃ao com uso da fun ̧c ̃ao strcat() e outra sem.
#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
  char str1[TAM];
  char str2[TAM];
  printf("Digite a string 1:");
  scanf("%[^\n]",str1); // %[^\n] siginifica que é ate o usuário apertar a tecla enter
  printf("Digite a string 2:");
  scanf(" %[^\n]",str2);
  printf("As duas strings juntas são %s: \n",strcat(str1,str2));
 
  return 0;
}