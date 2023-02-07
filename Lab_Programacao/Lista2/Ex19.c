/*Elaborar um programa que apresente a m ́edia aritm ́etica dos n ́umeros inteiros existentes entre uma
faixa especificada pelo usu ́ario.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int A,B, TAM = 0;
    float media = 0;

    puts("Insira o intervalo da faixa de valores comecando de A ate B");
    scanf("%d",&A);
    scanf("%d",&B);

    TAM = (A > B) ? (A - B) : (B - A); 

    for (int i = 0; i < TAM; i++)
    {
        media+=i;
    }
    printf("A media aritmetica da faixa %d,%d e: %.2f",A,B,(media/TAM));
    return 0;
}
