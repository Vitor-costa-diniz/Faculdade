#include <stdio.h>
#include <stdlib.h>

int main(void){

  FILE *file;
  file = fopen("string.txt","r");

  if(file == NULL){
    printf("Usuário digitou um arquivo inválido");
    getchar();
    exit(0);
  }

  char frase[100];

  while(fgets(frase,100,file) !=NULL){ // fgets() recebe 3 parametros
    printf("%s", frase);
  }
  
  fclose(file);
  return 0;
}