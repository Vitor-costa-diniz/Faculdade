// Escreva um programa que copie uma string para outra usando ponteiros.

#include <stdio.h>
void copiarString(char *copiarDaqui, char *colarAqui){
  while(*copiarDaqui != '\0'){
    *colarAqui = *copiarDaqui;
    ++copiarDaqui;
    ++colarAqui;
  }
  *colarAqui = '\0';
}

int main(void){
  char *copiarDaqui, *colarAqui;
  char string [] = "Pao com mortadela";
  char string2[20];

  copiarString(string,string2);
  printf("%s\n",string2);

  getchar();
}