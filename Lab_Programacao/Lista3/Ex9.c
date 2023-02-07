/*9. Fa ̧ca um programa que leia uma matriz bidimensional do usu ́ario, de dimens ̃ao 3x3, e apresente os
elementos da diagonal principal.*/
#include <stdio.h>
#define TAM 3
int main(int argc, char const *argv[])
{
    int m[TAM][TAM], v[TAM];
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
        {   
            puts("Insira um valor");
            scanf("%d", &m[i][j]);
            v[i] = (i == j) ? m[i][j] : v[i];
        }
    for(int k=0; k<TAM; k++){
		for (int j=0; j<TAM; j++){
			printf("%#d ",m[k][j]);
		}
		printf("\n");
	}
    printf("Elementos da diagonal principal: ");
    for (int k = 0; k < TAM; k++) printf("%d", v[k]);
    
    
    return 0;
}
