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
    //int sub_expoente=0;

    scanf("%d%*c",&x);
    //scanf("%d%*c",&y);

    //scanf("%d%*c",&opc);

    divisor=x;//setar o divisor

    quociente=1;//so para entrar no while

    while(quociente>0){//qtd div inteiras por 10
        quociente=divisor/dividendo;
        divisor=quociente;
        qtd_div++;
    }

    //printf("qtd div = %d\n",qtd_div);

    divisor=x;//preparar prox div
    expoente=0;

    for(int i=0;i<qtd_div;i++){
        quociente=divisor/dividendo;//executar a divisão
        resto=divisor%dividendo;
        divisor=quociente;//prepara o prox divisor

        if(expoente==0){
            construtor+=(resto*1);
            //printf("construtor = %d\n",construtor);
            expoente++;
        }else{
            for(int j=0;j<expoente;j++){//calcula a potencia de 10 de acordo com i
                pot_10*=10;
                printf("pot = %d\n",pot_10);
                construtor+=(resto*pot_10);
            }
            expoente++;
        }




        /*
        if(expoente==0){
            if(expoente!=y){//construir o num novamente
                expoente++;
                construtor+=(resto*1);//10^0==1
            }
        }else{
            for(int j=0;j<expoente;j++){//calcula a potencia de 10 de acordo com i
                pot_10*=10;
                printf("pot = %d\n",pot_10);
            }

            if(expoente!=y){//construir o num novamente
                expoente++;
                construtor+=(resto*pot_10);
            }
        }
        */
    }

    printf("%d\n",construtor);

    return 0;
}
