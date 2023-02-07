//Fa ̧ca um programa em C que leia uma string do usu ́ario e informe a quantidade de caracteres da string fornecida. N ̃ao use a fun ̧c ̃ao strlen().
#include <stdio.h>
#define TAM 20
int main() {
    char palavra[TAM];
    int tam=0 ,i;

    printf("Digite uma palavra: ");
    scanf("%s",palavra);

    i = 0;
    while(palavra[i] != '\0')
    {
        i++;
        tam ++;
    }
    printf("A palavra tem %d letras \n", tam);
}