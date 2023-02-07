#include <stdio.h>

int main()
{   
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    num % 2 == 0 ? printf("O numero digitado e par") : printf("O numero digitado e impar");

    return 0;
}
