/*Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao
intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.*/

#include <stdio.h>
#include <stdbool.h>
#define TAM 100

bool verifcarDivisivelPorTres(int n){
    return (n%3==0) ? true : false;
}
bool verifcarDivisivelPorCinco(int n){
    return (n%5==0) ? true : false;
}
int main(int argc, char const *argv[])
{   
    int somatorioTres = 0, somatorioCinco = 0;
    for (int i = 0; i < TAM; i++)
    {
        somatorioTres += verifcarDivisivelPorTres(i) ? i : 0;
        somatorioCinco += verifcarDivisivelPorCinco(i) ? i+100 : 0;
    }
       
    printf("O somatorio de todos os numeros divisiveis por 3 pertencentes ao intervalo:0, 100 e:%d\n",somatorioTres);   
    printf("O somatorio de todos os numeros divisiveis por 5 pertencentes ao intervalo:100, 200 e:%d",somatorioCinco);
    
    
    return 0;
}
