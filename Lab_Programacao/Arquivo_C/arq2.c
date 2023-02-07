#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  FILE *file;
  file = fopen("numero.txt","r");

  if(file == NULL){ // Controle de erro no programa
    printf("Arquivo não pode ser aberto\n");
    return 0;
  }

  int x,y,z;

  fscanf(file,"%d %d %d", &x,&y,&z); // ler do arquivo
  // limita oq o programa pode ler, se está prohramado pra int n vai ler outro tipo de valor

  printf("%d %d %d\n",x,y,z);
  
  fclose(file);
  
  return 0;
}