/*Elabore um programa que apresente a quantidade de n ́umeros divis ́ıveis por 3 pertencentes a faixa
A,B especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.*/
#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int A,B, TAM = 0, divPorTres = 0,i=0;

    puts("Insira o intervalo da faixa de valores comecando de A ate B");
    scanf("%d",&A);
    scanf("%d",&B);

    TAM = (A > B) ? (A - B) : (B - A); 
    i = (A > B) ? B : A;
    
    while (TAM!=0)
    {
        if(i%3 == 0 && i!=0){
            printf("%d e divisivel por 3\n",i);
            divPorTres++;
        }else printf("%d nao e divisivel por 3\n",i);
        i++;
        TAM--;
    }
    printf("A quantidade de numeros divisiveis por 3 na faixa entre A e B e: %d",divPorTres);
    return 0;
}
