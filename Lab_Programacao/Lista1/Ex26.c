#include <stdio.h>
#include <math.h>

int main()
{   
    int x1,y1,x2,y2;
    float dist;

    printf("Digite as cordenadas do primeiro ponto: ");
    scanf("%d %d", &x1,&y1);

    printf("Digite as cordenadas do segundo ponto: ");
    scanf("%d %d", &x2,&y2);

    dist = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("O valor da distancia entre os dois pontos foi de: %.2f\n", dist);

    return 0; 
}
