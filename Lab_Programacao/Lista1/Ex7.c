#include<stdio.h>
int main(){
  int horas,min,seg;
  printf("Digite as horas:\n");
  scanf("%d",&horas);
  printf("Digite os minutos:\n");
  scanf("%d",&min);
  printf("Digite os segundos:\n");
  scanf("%d",&seg);
  printf("O total de segundos é:%d",(horas*3600)+(min*60)+seg);
  return 0;
    
}