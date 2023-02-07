#include <stdio.h>
#define TAM 20

int main(){
  int s;
  char str[TAM];
  char a;
  puts("Digite uma letra");
  scanf("%c",&a);
  puts("Digite a frase:");
  
  for (int i=0;i<TAM;i++){
    scanf("%c",&str[i]);
  }

  for (int i=0;i<TAM;i++){
    if (a == str[i]){
      s = 1;
      }
  }
  if (s == 1){
    printf("O caracter está contido");
  }
  else{
    printf("não está contido");
  }


  
  return 0;
}