#include <stdio.h>
#include <stdlib.h>

void gerarVetor(int *, int);
void verificaMenor(int *, int);

int main(){

    int *p=NULL;

    int tam;

    puts("Digite o tamanho do vetor: ");

    scanf("%d", &tam);

    p = (int *) malloc(tam * sizeof(int));

    if(!p){

        printf("Não foi possível alocar a memória !");
        exit(1);

    }

    gerarVetor(p, tam);
    verificaMenor(p, tam);

return 0;

}

void gerarVetor(int *pVetor, int tam){

    for(int i = 0; i < tam; i++){

        printf("Digite um numero: ");
        scanf("%d", (pVetor+i));

    }

}

void verificaMenor(int *pVetor, int tam){

    int *pMenor;
    pMenor  = pVetor;

    for(int i = 1; i < tam; i++){
        
        pMenor = (*pMenor > *(pVetor + i)) ? (pVetor + i):pMenor; 
    }

    printf("O menor numero digitado e seu endereco serao mostrados abaixo: \n");
    printf("Endereço: [%p], numero: %d\n", pMenor, *pMenor);
}
