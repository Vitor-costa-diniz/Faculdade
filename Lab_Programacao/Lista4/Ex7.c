// Escreva um programa que concatene duas strings utilizando ponteiros.

#include <stdio.h>

void concatenarString(char *copiarDaqui1,char *copiarDaqui2,char *colarAqui){
  while(*copiarDaqui2 != '\0'){
    while(*copiarDaqui1 != '\0'){
      *colarAqui = *copiarDaqui1;
        ++copiarDaqui1;
        ++colarAqui;
    }
    *colarAqui = *copiarDaqui2;
    ++copiarDaqui2;
    ++colarAqui;
  }
}
int main(void){
  char *copiarDaqui1, *copiarDaqui2, *colarAqui;
  char string1 [] = "Pao com mortadela";
  char string2 [] = " é bom demais";
  char string3[50];

  concatenarString(string1,string2,string3);
  printf("%s\n",string3);
  getchar();
}
