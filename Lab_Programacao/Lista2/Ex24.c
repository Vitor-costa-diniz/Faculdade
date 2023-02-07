/*Um triˆangulo retˆangulo pode ter lados que s ̃ao valores inteiros. O conjunto de trˆes valores inteiros para
os lados de um triˆangulo retˆangulo  ́e chamado de tripla de Pit ́agoras. Esses trˆes lados precisam satisfazer
o relacionamento de que a soma do quadrado de dois catetos  ́e igual ao quadrado da hipotenusa. Ache
todas as triplas de Pit ́agoras n ̃ao superiores a 500 para cateto1, cateto2 e hipotenusa. Este  ́e um exemplo
de computa ̧c ̃ao por for ̧ca bruta. Isso n ̃ao  ́e esteticamente atraente para muitas pessoas. Mas existem
muitos motivos para essas t ́ecnicas serem importantes. Em primeiro lugar, com o poder da computa ̧c ̃ao
aumentando em um ritmo t ̃ao fenomenal, solu ̧c ̃oes que levariam anos, ou mesmo s ́eculos, para serem
produzidas com a tecnologia de alguns anos atr ́as, agora podem ser produzidas em horas, minutos ou
mesmo segundos. Os chips microprocessadores recentes podem processar um bilh ̃ao de instru ̧c ̃oes por
segundo! Em segundo lugar, como vocˆe descobrir ́a mais adiante no Curso de Ciˆencia da Computa ̧c ̃ao,
existem in ́umeros problemas interessantes para os quais n ̃ao existe uma t ́ecnica algor ́ıtmica conhecida
al ́em da simples for ̧ca bruta.*/


#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int cateto1=0, cateto2 = 0, hipotenusa = 0, c1c2 = 0,tp = 0, cont=0;

    for (hipotenusa  = 1; hipotenusa < 500; hipotenusa++){
       for (cateto1 = 1; cateto1 < 500; cateto1++){
           for (cateto2 = 1; cateto2 < 500; cateto2++){
               c1c2 = pow(cateto1, 2) + pow(cateto2,2);
               tp = pow(hipotenusa, 2);
               (c1c2 == tp) ? printf("%d %d = %d \n", cateto1, cateto2, hipotenusa) : 0;
           }    
       }
       
    }
    

    return 0;
}
