// Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.

#include <stdio.h>

void compararString(char *lerString, char *verCaracter){
  while(*lerString != '\0'){
    if(*verCaracter == *lerString){
      printf("caracter está contindo na string");
      break;
    }
    else{
      continue;
    }
    ++lerString;
  }
  *lerString = '\0';
}

int main(void){
  char c[1];
  char frase[60];
  printf("Digite uma frase:\n");
  scanf("%s",frase);

  printf("Digite o caracter que deseja saber se está na string:\n");
  scanf("%s",c);
  compararString(frase,c);
  return 0;
}