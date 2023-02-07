
#include <stdio.h>
#include <stdlib.h>

#define TOTAL 2


typedef struct node {
  int X;
  int Y;
  float Z;
  struct node *p;
}node;


int main(void) {

  node *P_struct;

  P_struct = malloc(TOTAL * sizeof(node));



  P_struct->X = 142;
  P_struct->Y = 115;
  P_struct->Z = (float)(P_struct->X + P_struct->Y)/2;


  P_struct-> p  = (P_struct+1);
  (P_struct+1)-> X = 86;
  (P_struct+1)-> Y = 65;
  (P_struct+1)->Z = (float)((P_struct+1)->X + (P_struct+1)->Y)/2;
  
  printf("\nCampo X: %d // Campo Y: %d\n", P_struct->X, P_struct->Y);
  printf("\nCampo X: %d // Campo Y: %d\n", (P_struct+1)->X,(P_struct+1)->Y);
  printf("Média: %.2f\n", P_struct->Z);
  printf("Média do próximo: %d", P_struct->p->X);

  
  return 0;
}
