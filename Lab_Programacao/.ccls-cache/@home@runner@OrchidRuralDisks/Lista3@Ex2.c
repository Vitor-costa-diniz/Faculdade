#include<stdio.h> 
void Troca(int *p, int *q)  
{  
   int temp;  
   temp = *p;   
   *p = *q;   
   *q = temp;  
   printf("i = %d \nj = %d", *p, *q);  
}  
  
int main () {  
  
  int *i, *j;
  int a = 1, b = 3;
  i = &a; // i vai apontar para o endereço de a
  j = &b; // j vai apontar para o endereço de b
  Troca(i,j);  
} 