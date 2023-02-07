/*Escreva um programa que imprima uma tabela dos equivalentes bin ́ario, octal e hexadecimal dos
n ́umeros decimais no intervalo de 1 a 256.*/

#include <stdio.h>

int binario(int x){
  return (x == 0) ? 0: (binario(x/2)*10) | (x%2);
}
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 256; i++)
    {
        printf("%d em binario: %d, em octal: %o, em hexadecimal: %x\n",i,binario(i),i,i);
    }
    return 0;
}
