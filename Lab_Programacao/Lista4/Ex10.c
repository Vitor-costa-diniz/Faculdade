#include <stdio.h>
#include <stdlib.h>
#define N 7
#define T 14
#define V 10

void gerarVetor(int *, int, int);
void geraVetorRecorrencia(int *, int *, int, int);
void imprimirVetor(int *, int);
int contaRecorrencia(int *, int, int);

int main(int argc, char const *argv[])
{

    int *p = NULL, X[T], F[N];

    gerarVetor(X, T, (N - 1));
    puts("Vetor X");
    imprimirVetor(X, T);
    contaRecorrencia(X, 1, T);
    geraVetorRecorrencia(X, F, N, T);
    puts("Vetor F");
    imprimirVetor(F, N);

    return 0;
}

void imprimirVetor(int *p, int t)
{

    for (int i = 0; i < t; i++)
    {
        printf("Valor[%d](%d) |\n", i, *(p + i));
    }
}

void gerarVetor(int *p, int t, int val)
{
    srand(time(NULL));

    for (int i = 0; i < t; i++)
    {
        *(p + i) = rand() % (val - 1);
    }
    printf("\n");
}

void geraVetorRecorrencia(int *x, int *k, int t, int tx)
{

    int aux[7];
    int ver = 0;
    for (int i = 0; i < t; i++)
    {
        ver = contaRecorrencia(x, *(x + i), tx);

        if (ver > 0 && *(x + i) != 0)
        {
            *(k + i) = i;
        }
    }
}

int contaRecorrencia(int *c, int car, int t)
{

    int j = 0;

    for (int i = 0; i < t; i++)
    {
        j += *(c + i) == car ? 1 : 0;
    }
    return j;
}
