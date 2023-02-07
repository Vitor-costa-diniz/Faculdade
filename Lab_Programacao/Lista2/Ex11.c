/*Refa ̧ca a quest ̃ao 10, considerando que os limites da faixa (A e B) sejam fornecidos pelo usu ́ario. O
programa deve funcionar tanto para A > B quanto para B > A.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int A,B, TAM = 0, i=0;

    puts("Insira o intervalo da faixa de valores comecando de A ate B");
    scanf("%d",&A);
    scanf("%d",&B);

    TAM = (A > B) ? (A - B) : (B - A); 
    i = (A > B) ? B : A;
    
    while (TAM!=0)
    {
        (i%4 == 0) ? printf("%d e divisivel por 4. O quadrado de %d e: %d\n",i,i,(i*i)) : printf("%d nao e divisivel por 4\n",i);
        i++;
        TAM--;
    }
    
    return 0;
}
