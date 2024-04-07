/*
ex07-calculadora:

somar algarismos de dois num e apresentar o resultado

ex:
x=123
y=456
algX+algY=579
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    int quociente;
    int qtd_div=0;

    scanf("%d%*c",&x);
    scanf("%d%*c",&y);

    quociente=x;

    while(quociente!=0){//encontrar qtd divisoes de x
        quociente/=10;
        qtd_div++;
    }
    return 0;
}
