#include <stdio.h>

int main()
{   
    
    int tempo;

    printf("Digite uma determinada quantidade de tempo (em segundos): ");
    scanf("%d", &tempo);
    
    if(tempo >= 3600) {
        printf("A quantidade de tempo digitada em horas representa: %d\n", tempo/(60*60));
        printf("A quantidade de tempo digitada em minutos representa: %d\n", tempo/60);
        printf("A quantidade de tempo digitada em segundos representa: %d\n", tempo);
    }else if(tempo > 60){
        printf("A quantidade de tempo digitada em minutos representa: %d\n", tempo/60);
        printf("A quantidade de tempo digitada em segundos representa: %d", tempo);
    }

    return 0;
}
