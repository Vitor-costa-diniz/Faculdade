#include <stdio.h>

int main()
{   
    
    int x,n;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite um valor para o expoente: ");
    scanf("%d", &n);

    printf("O resultado do produto foi de: %d", x * 2 << (n-1));

    return 0;
}
