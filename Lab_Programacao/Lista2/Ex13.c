/*Elabore um programa que calcule o somat ́orio de todos os n ́umeros pares pertencentes a faixa A,B
especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.*/
#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int A,B, TAM = 0, somatorio = 0,i=0;

    puts("Insira o intervalo da faixa de valores comecando de A ate B");
    scanf("%d",&A);
    scanf("%d",&B);

    TAM = (A > B) ? (A - B) : (B - A); 
    i = (A > B) ? B : A;

    while (TAM!=0)
    {
        if(i%2 == 0){
            printf("%d e par\n",i);
            somatorio+=i;
        }else printf("%d e impar\n",i);
        i++;
        TAM--;
    }
    printf("O somatorio de todos os numeros pares entre: %d e %d foi: %d",A,B,somatorio);
    return 0;
}
