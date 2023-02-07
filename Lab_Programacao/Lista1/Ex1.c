#include <stdio.h>
int main (){
  int x;
  x = 7 + 3*6/2-1; 
  printf("%d\n",x);
  x = 2%2 + 2*2-2/2;
  printf("%d\n",x);
  x = (3*9*(3+(9*3/(3))));
  printf("%d\n",x);
  return 0;
}
// Parênteses primeiro, depois multiplicação,em seguida divisão e depois somas e subtrção em ordem que aparecem.