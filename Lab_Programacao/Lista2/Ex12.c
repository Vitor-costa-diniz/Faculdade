/*Elaborar um programa que mostre os resultados da tabuada de um n ́umero inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int n;
    puts("Insira o numero para consultar sua tabuada");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++) printf("%d x %d = %d \n",n,i,(n*i));
    return 0;
}
