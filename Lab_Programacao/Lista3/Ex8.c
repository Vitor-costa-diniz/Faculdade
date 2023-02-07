/*8. Fa ̧ca um programa em C que gere um vetor com 100 n ́umeros inteiros pseudoaleat ́orios no intervalo
definido pelo usu ́ario e apresente esse vetor ordenado (crescente). Fa ̧ca uma vers ̃ao com o m ́etodo
de ordena ̧c ̃ao por sele ̧c ̃ao e outra pelo m ́etodo bolha (bubble sort).*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100

void bubleSort(int *v, int intervalo);
void selectSort(int *v, int intervalo);

int main(int argc, char const *argv[])
{
    int intervalo, v[100];
    puts("Insira um intervalo");
    scanf("%d", &intervalo);
    for (int i = 0; i < intervalo; i++)
        v[i] = rand() % intervalo;

    puts("Ordenado por bubble sort");
    bubleSort(v, intervalo);
    
    puts("Ordenado por select sort");
    selectSort(v, intervalo);

    return 0;
}

void bubleSort(int *v, int intervalo)
{
    int aux = 0;
    for (int i = 0; i < intervalo; i++)
    {
        if (v[i] > v[i + 1])
        {
            aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
    }

    for (int k = 0; k < intervalo; k++)
    {
        printf("%d", v[k]);
    }
}

void selectSort(int *v, int intervalo)
{
    int aux;
    for (int i = 0; i < intervalo - 1; i++)
    {
        for (int j = i + 1; j < intervalo; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;

            }
        }
    }

    for (int k = 0; k < intervalo; k++)
    {
        printf("%d", v[k]);
    }
}
