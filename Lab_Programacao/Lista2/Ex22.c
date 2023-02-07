/*Escreva um programa que leia um n ́umero inteiro e determine e imprima quantos d ́ıgitos no inteiro s ̃ao
algarismos 7.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, contador;
    puts("Insira um numero");
    scanf("%d",&n);
    char numero[sizeof(n)];
    sprintf(numero, "%d", n);  
    for (int i = 0; i < strlen(numero); i++)
    {
        contador += (numero[i] == '7') ? 1 : 0;
    }
    puts("A quantidade de numeros 7 dentro do n:"); 
    puts(numero);
    printf("e: %d",contador);
    
    return 0;
}
