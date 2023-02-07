#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(float *pVetor, int tam);
void soma(float *pVetor, int tam);

int main (int argc, char *argv[]) {
	int tam;
	float *pVetor = NULL;

	tam = atoi(*(argv + 1));
	pVetor = malloc(tam * sizeof(float));
	
    if (!pVetor) {
		puts("Infelizmente não foi possível alocar a memória.");
		exit(1);
	}

    gerarVetor(pVetor, tam);
    soma(pVetor, tam);

	return (0);
}


void gerarVetor(float *pVetor, int tam){

	srand(time(NULL));
	for (int k = 0; k < tam; k++){
		*(pVetor + k) = (rand() % 100) + (float)(rand() % 100)/100;
	}

}


void soma(float *pVetor, int tam){

    float soma;

    for(int i = 0; i < tam; i++){

        soma += *(pVetor + i);
    }

    printf("O valor da soma de todos elemento do vetor:\n%.2f", soma);
}
