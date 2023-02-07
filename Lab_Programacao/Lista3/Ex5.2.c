#include <stdio.h>
#include <string.h>
#define TAM 60

int main(){
  char str1[TAM];
  char str2[TAM];
  char str3[TAM];
  printf("Digite a primeria string: ");
  scanf("%[^\n]",str1);
  printf("Digite a segunda string: ");
  scanf(" %[^\n]",str2);
  
  for(int i=0; i < strlen(str1) ;i ++){
    str3[i] = str1[i];
  }
  
  for(int i=0;i < strlen(str2);i++){
    str3[i+strlen(str1)] = str2[i];
  }
  
  printf("string 3 é %s\n",str3);
  return 0;
}
