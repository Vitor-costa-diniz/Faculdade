#include<stdio.h>
int main(){
  float com,lar,h,volume;
  printf("Digite a altura da caixa em metros:\n");
  scanf("%f",&h);
  printf("Digite o comprimento da caixa em metros:\n");
  scanf("%f",&com);
  printf("Digite a largura da caixa em metros:\n");
  scanf("%f",&lar);
  volume = com * lar * h;
  printf("O volume da caixa é: %.2f m3\n",volume);
  return 0;
  
}