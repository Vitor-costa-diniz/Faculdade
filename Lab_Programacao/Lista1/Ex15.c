#include<stdio.h>
int main(){
  float dias,salario;
  printf("Digite quantos dias você trabalhou:\n");
  scanf("%f",&dias);
  salario = (dias * 50.25) * 0.9;
  if (dias < 10){
    printf("Voce vai recceber %.2f reais\n",salario);
  }
  else if (10>= dias < 20){
    printf("Você vai receber %.2f reais\n",salario * 1.20);
  }
  else if (dias >= 20) {
    printf("Você vai receber %.2f reais\n",salario * 1.30);
  }
  return 0;
}