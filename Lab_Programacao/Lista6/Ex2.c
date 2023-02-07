// Escreva um programa em C que utilize uma Estrutura estoque que cont ́em uma string com o nomePeca, um n ́umero inteiro para identificar o n ́umero da pe ̧ca, o pre ̧co em ponto flutuante e um elemento inteiro para identificar o n ́umero do pedido.

#include <stdio.h>

struct Estoque{
  char nomePeca[20];
  int id;
  float preco;
  int elem;
};

int main(){
  struct Estoque peca;
  printf("Digite o nome da peça desejada:\n");
  scanf("%s",peca.nomePeca);
  puts("Digite o numero de identificação da peça");
  scanf("%d",&peca.id);
  puts("Digite o preço do produto");
  scanf("%f",&peca.preco);
    
  return 0;
}