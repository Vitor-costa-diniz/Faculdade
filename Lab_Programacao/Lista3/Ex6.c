// Fa ̧ca um programa em C que leia uma string do usu ́ario e a apresente na forma inversa.
#include <stdio.h>
#include <string.h>
#define TAM 30
 int main(){
   char str[TAM];
   char str2[TAM];
   printf("Digite uma string:");
   scanf("%[^\n]",str);
   for(int i=0; i < strlen(str);i++){
     str2[strlen(str) - i] = str[i];
   }
   printf("A string 1 ao contrário é: %s\n",str2);
  
    
   return 0;
 }