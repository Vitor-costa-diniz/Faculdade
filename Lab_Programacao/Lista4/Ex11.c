/*
Escreva um programa que gere dois vetores (X e Y ) com n ́umeros pseudoaleat ́orios no intervalo
[0,N − 1]. Crie uma matriz M com dimens ̃oes NxN que armazene as coocorrˆencias dos elementos
de X e Y da seguinte forma:
Por exemplo, para N = 7:
X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]
Y = [3, 6, 2, 1, 0, 2, 1, 3, 5, 5, 3, 4, 1, 5]
Portanto,
M =
0 0 1 0 0 0 0
2 0 0 1 0 0 0
0 0 1 1 0 0 0
0 0 2 0 1 0 1
0 0 0 0 0 0 0
0 0 0 0 0 3 0
0 0 0 0 0 0 1
Não consegui fazê-la
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 7
#define T 14

void gerarVetor(int *, int, int);
void imprimirVetor(int *, int);
void imprimirMatriz(int *, int, int);
int contaRecorrencia(int *, int *, int ,int, int);

int main(int argc, char const *argv[])
{
    //int X[T], Y[T];
    int **p = NULL;
    p = calloc(N * N, sizeof(int));
    srand(time(NULL));
    int X[] = {4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5};
    int Y[] = {3, 6, 2, 1, 0, 2, 1, 3, 5, 5, 3, 4, 1, 5};
    // gerarVetor(X, T, N);
    // imprimirVetor(X, T);

    // gerarVetor(Y, T, N);
    // imprimirVetor(Y, T);

    preencherM(p, N * N, X, Y, T);



    imprimirMatriz(p, N, N);
    return 0;
}

void gerarVetor(int *p, int t, int val)
{

    for (int i = 0; i < t; i++)
    {
        *(p + i) = rand() % (val - 1);
    }
    printf("\n");
}

void imprimirVetor(int *p, int t)
{

    for (int i = 0; i < t; i++)
    {
        printf("Valor[%d](%d) |\n", i, *(p + i));
    }
}

void imprimirMatriz(int *pm, int lin, int col)
{

    for (int k = 0; k < lin * col; k++)
    {
        printf("%d\t", *(pm + k));
        if (((k + 1) % col) == 0)
            printf("\n");
    }
    printf("\n");
}

int contaRecorrencia(int *x, int *y, int carX, int carY, int t)
{

    int j = 0, f = 0;

    for (int i = 0; i < t; i++)
    {
        j += *(x + i) == carY ? 1 : 0;
        f += *(y + i) == carX ? 1 : 0;
    }
    return f - j;
}



void preencherM(int *p, int t, int *x, int *y, int txy)
{
    int verx = 0;
    int very = 0;

    //very = contaRecorrencia(y, *(y + 1), txy);

    for (int i = 0; i < t; i++)
    {
        //*(p + i) = rand() % N-1;
        // verx = contaRecorrencia(y, *(x + i), txy);
        very = contaRecorrencia(x, y, *(y + i), *(x + i), txy);
        if (very > 0 && *(y + i)!=0 && *(x + i) !=0)
        {
            *(p + i) = very;
            printf("verxR[%d]\n", very);
        }
       
    }
}
