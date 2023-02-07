// Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.
#include <stdio.h>
#include <string.h>
int main(){
  char *gets(char *nome);
  char nome[80];
  printf("Digite o seu nome completo: ");
  gets(nome);
  printf("Nome completo: %s",nome);
  printf("\n Número de caracteres: %ld",strlen(nome));
  return 0;
}