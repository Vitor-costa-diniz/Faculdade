// Fa ̧ca um programa em C que gere um vetor com 3 n ́umeros inteiros pseudoaleat ́orios no intervalo [0, 19] e apresente a sua m ́edia aritm ́etica e geom ́etrica.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 3

int main(){
  char vet[TAM];
  float soma;
  double produto = 1,geo,expoente;
  puts("Gerando números aleatórios");
  for(int i=0; i<TAM;i++){
    vet[i] = rand() %100 ;
    printf("Número: %d\n",vet[i]);
    soma = soma + vet[i];
    produto = produto * vet[i];
  }
  
  expoente = 1.0 / 3.0 ;
  geo = produto * expoente;
  printf("A média aritimética dos números é: %.1f\n",soma/3);
  printf("A média geométrica dos números é: %.1lf\n",geo);
  return 0;
}