/*Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um
expoente que varie do valor 0 a 7.*/

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 7; i++) printf("3 elevado a %d e: %.0f\n",i, pow(3,i));
    return 0;
}
