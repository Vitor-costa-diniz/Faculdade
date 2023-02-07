/*10. Fa ̧ca um programa que gere uma matriz bidimensional com elementos aleat ́orios e receba do usu ́ario
um valor inteiro x. O programa deve informar quantas vezes x aparece na matriz gerada.*/

#include <stdio.h>
#define TAM 3
int main(int argc, char const *argv[])
{
    int m[TAM][TAM], x, count = 0;

    puts("Insira um valor para ser verificado na matriz");
    scanf("%d", &x);

    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
        {
            m[i][j] = rand() % 10;
            count += (m[i][j] == x) ? 1: 0;
        }
    for(int k=0; k<TAM; k++){
		for (int j=0; j<TAM; j++){
			printf("%#d ",m[k][j]);
		}
		printf("\n");
	}
    printf("O numero %d, apareceu %d vezes na matriz",x,count);
        

    return 0;
}
