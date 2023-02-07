/*Um pal ́ındromo  ́e um n ́umero, ou frase textual, que pode ser lido da mesma forma da esquerda para
a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco d ́ıgitos  ́e um pal ́ındromo:
12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco d ́ıgitos e determine se
ele  ́e ou n ̃ao um pal ́ındromo. [Dica: use os operadores de divis ̃ao e m ́odulo para separar o n ́umero em
seus d ́ıgitos individuais.]*/
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char v[5];

    puts("Insira um numero de 5 digitos");
    gets(v);
    strrev(v);
    puts("O numero invertido e:");
    puts(v);
       
    return 0;
}
