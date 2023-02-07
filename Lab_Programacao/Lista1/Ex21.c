//Objetivo do programa é dado dois números verificar se eles são multiplos ou não(sem a utilização da estrutura condicional if)
#include <stdio.h>

int main()
{   
    //Declaração das variáveis
    int num1,num2;

    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    //Aqui é ultilizado um operador ternário para verificar se é multiplo ou não
    num1 >= num2 && num1 % num2 == 0 ? printf("E multiplo !") : printf("Nao e multiplo !");

    return 0;
}
