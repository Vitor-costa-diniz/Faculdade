/*A s ́erie de Fibonacci  ́e formada pela seguinte sequˆencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva
um algoritmo que gere a s ́erie de Fibonacci at ́e o vig ́esimo termo.*/
#include <stdio.h>

int fib(int n){
    return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 20; i++) printf("O fib de %d e:%d\n",i,fib(i));
    return 0;
}
