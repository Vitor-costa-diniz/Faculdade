/*Para que a divis ̃ao entre 2 n ́umeros possa ser realizada, o divisor n ̃ao pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divis ̃ao do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que n ̃ao deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n1, n2, op;

    puts("Insira a operacao, para n: digite 1, para s: digite 0");
    scanf("%d", &op);
    switch (op)
    {
    case 0:
        puts("Insira um valor");
        scanf("%d", &n1);
        puts("Insira um valor");
        scanf("%d", &n2);
        printf("A divisão entre n1 e n2 e: %.2f\n", n1/n2);
        puts("Insira a operacao, para n: digite 1, para s: digite 0");
        scanf("%d", &op);
        break;
    default:
        puts("Operacao encerrada");
        break;
    }
    
    

    return 0;
}
