/*Elaborar um programa que apresente os valores de convers ̃ao de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a f ́ormula de convers ̃ao.*/

//F = (9 * C + 160) / 5

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int F, C=10;
    while (F<212)
    {
        F = (9 * C + 160) / 5;
        printf("%d graus Celsius convertido em Farenheit e : %d graus\n",C,F);
        C+=10;
    }
    
    return 0;
}
