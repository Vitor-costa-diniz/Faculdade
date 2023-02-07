#include<stdio.h>
int main(){
  float h,p;
  char sexo;
  printf("Digite a sua altura:\n");
  scanf("%f",&h);
  printf("Digite o seu sexo [M/F]:\n");
  scanf(" %c",&sexo);
  if (sexo == 'M'){
    p = 72.7*h - 58;
      printf("O peso ideal dessa pessoa é: %.2f kg\n",p);  
  }
  else{
    p = 62.1*h - 44.7;
    printf("O peso ideal dessa pessoa é: %.2f kg \n",p);
  }
  
  return 0;
  
}