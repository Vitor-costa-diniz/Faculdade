#include <stdio.h>
int main(){
  int n1,n2;
  printf("Digite o primeiro número:\n");
  scanf("%d",&n1);
  printf("Digite o segundo número(ele tem que ser o maior):\n");
  scanf("%d",&n2);
  printf("A soma dos números é %d a diferença é %d e o produto é %d\n",n1+n2,n2-n1,n1*n2);
  printf("O quociente da divisão é %d e o resto é %d",n2/n1,n2 % n1);
  return 0;
  
}