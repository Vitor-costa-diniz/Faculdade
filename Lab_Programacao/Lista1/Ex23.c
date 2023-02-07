#include <stdio.h>

int main()
{   
    //Declaração das variáveis
    int num, part;

    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &num);

    //Aqui é feita a separação do número e também a mudança de ordem para valores positivos
    if(num >= 0){
       do {
           part = num % 10;
           printf("%d", part);
           num /= 10;
       }while (num != 0);

    }
        //Aqui é feita a separação do número e também a mudança de ordem para valores negativos
    else if(num < 1){
        num *= -1;

        printf("-");
        do{
            part = num % 10;
           printf("%d", part);
           num /= 10;
       }while (num != 0);
    }
    return 0;
}
