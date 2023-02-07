#include <stdio.h>
struct Aluno{
  float n1;
  float n2;
  float media;
  char nome[20];
};

int main(){
  struct Aluno a1;
  printf("Digite o nome do aluno:\n");
  scanf("%s",a1.nome);
  printf("Digite a nota 1:\n");
  scanf("%f",&a1.n1);
  printf("Digite a nota 2:\n");
  scanf("%f",&a1.n2);
  a1.media = (a1.n1 + a1.n2)/2;
  printf("A média do aluno %s é %.1f\n",a1.nome,a1.media);
  return 0;
}