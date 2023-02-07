#include <stdio.h>
int main(){

  FILE *file;
  file = fopen("arq1.txt", "w"); //r = read, w = write, a = append
  fprintf(file,"r = read; w = write; a = append"); // escrever no arquivo
  fclose(file); // fechar aquivo
  return 0;
}