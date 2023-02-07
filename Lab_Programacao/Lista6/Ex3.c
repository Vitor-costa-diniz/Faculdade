// Escreva um programa em C que gere um vetor com n ́umeros aleat ́orios e calcule sua m ́edia. Organize uma Estrutura com as seguintes informa ̧c ̃oes: ponteiro para a matriz, quantidade de elementos e a m ́edia.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct mean{

    int *pnums;
    int qntd;
    float media;

};

void gerarNumeros(struct mean *pS, int tam);
void mean(struct mean *pS, int qntdNotas);

int main(){

    struct mean m;

    printf("Digite a qntd de elementos: ");
    scanf("%d", &m.qntd);

    m.pnums = (int *) malloc(m.qntd * sizeof(int));

    if(!m.pnums){

        printf("Não foi possível alocar memória");
        exit(1);
    }

    gerarNumeros(&m, m.qntd);
    mean(&m, m.qntd);

    return 0;
}

void gerarNumeros(struct mean *pS, int qntd){
    
    srand(time(NULL));
	
    for( int i = 0; i < qntd; i++ ){
		*((pS)->pnums+i) =  rand() %100;
	}
}

void mean(struct mean *pS, int qntdNotas){

    float soma = 0;

    for (int i = 0; i < qntdNotas; i++){

        soma += *((pS)->pnums+i);
    }

    pS->media = soma / qntdNotas;

    printf("A media foi:\n%.2f", pS->media);
}
