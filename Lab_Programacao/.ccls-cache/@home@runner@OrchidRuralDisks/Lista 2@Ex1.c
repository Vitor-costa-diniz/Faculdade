#include <stdio.h>
#define TAM 14

int main(){
    float v[TAM];
    puts("Entre com os dados: ");
    for (int i=0; i<TAM; i++){
        scanf("%f",&v[i]);
    }
    
    float maior,menor = v[0];
    for (int i=0;i<TAM;i++){
        if(v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    
    printf("O maior  número digitado foi %.2f\n",maior);
    printf("O menor  número digitado foi %.2f\n",menor);
    
    return 0;
}