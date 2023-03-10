#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NOTAS 2
#define QTD_ALUNOS 3

typedef struct{
    float notas[QTD_NOTAS], media;
}aluno;

float mediaTurma(float, int);

int main ()
{
    aluno node[QTD_ALUNOS];
	float soma, acc = 0;
	int aux;

	srand(time(NULL));
	for( int j; j < QTD_ALUNOS; j++){
		soma = 0;
		for( int i = 0; i < QTD_NOTAS; i++ ){
			node[j].notas[i] =(rand() % 11) + (float) (rand() % 10) / 10;
			if ( node[j].notas[i] > 10) node[j].notas[i] = 10;
			soma += node[j].notas[i];
		}
		node[j].media = soma/QTD_NOTAS;
		acc += node[j].media;
	}

	puts("Notas:");
	for( int i = 0; i < QTD_ALUNOS; i++ ){
		aux = 0;
		printf("Aluno %d: ", i + 1);
		while ( aux < QTD_NOTAS ){
			printf("%.2f ", node[i].notas[aux]);
			aux++;
		}
		puts("");
		printf("Média Individual: ");
		printf("%.2f\n", node[i].media);
	}

	printf("Média da Turma: %.2f\n", mediaTurma(acc, QTD_ALUNOS));
	
    return 0;
}

float mediaTurma(float x, int i){
	return (float) x / i;
}
