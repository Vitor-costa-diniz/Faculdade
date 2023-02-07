/*Construir um programa que apresente como resultado o fatorial dos valores  ́ımpares situados na faixa
n ́umero de 1 a 10.*/
#include <stdio.h>

int fat(int n){
    return (n == 0) ? 1 : (fat(n-1)*n);
}

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        (i%2) ? printf("O fatorial de %d e: %d\n",i,fat(i)) : printf("%d e par\n",i);
    }
    return 0;
}
