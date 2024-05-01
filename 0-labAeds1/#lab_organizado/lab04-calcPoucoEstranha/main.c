#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int opc;
    int qtd_div=0;
    int divisor, dividendo=10, quociente, resto;
    int construtor=0;//reconstruir o num
    int pot_10=1;//calc pow 10
    int expoente=0;
    int sub_expoente=0;

    //scanf("%d%*c",&x);
    //scanf("%d%*c",&y);

    //scanf("%d%*c",&opc);

    //provisório:
    x=5432;
    y=2;

    divisor=x;

    quociente=1;//so para entrar no while

    while(quociente>0){//qtd div inteiras por 10
        quociente=divisor/dividendo;
        divisor=quociente;
        qtd_div++;
    }

    divisor=x;//preparar prox div

    for(int i=0;i<qtd_div;i++){
        quociente=divisor/dividendo;//executar a divisão
        resto=divisor%dividendo;
        divisor=quociente;

        expoente=i;

        for(int j=0;j<i;j++){//calcula a potencia
            pot_10*=10;
        }

        if(i==y){//remover algarismo cuju índice é y
            sub_expoente++;
        }else{//construir o novo num
            if(sub_expoente!=0){
                expoente--;
            }
            construtor+=resto*pot_10;
            expoente++;
        }
    }
    printf("%d\n",construtor);

    return 0;
}
