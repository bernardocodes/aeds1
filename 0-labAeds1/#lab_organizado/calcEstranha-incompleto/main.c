//feito hj no lab... provisório e referente a calculadora estranha parte 1.
//curioso pq quando manda imprimir qtd de div, ele fala um num muito alto em relação ao esperado

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int opc;

    //memória case 1
    int divisor,quociente,resto,dividendo=10;
    int i=3,acc=1;
    int potencia,expoente;
    int qtd_div=0;

    printf("dig x:\n");
    scanf("%d%*c",&x);
    //scanf("%d%*c",&y);

    printf("dig opc:\n");
    scanf("%d%*c",&opc);

    switch(opc){
    case 1:

        divisor=x;

        while(quociente!=0){//qtd div
            quociente=divisor/dividendo;
            divisor=quociente;
            qtd_div++;
        }
        printf("qtd div = %d",qtd_div);

        i=qtd_div;//i começa com 3 somente pq eu sei o num de div
        while(quociente!=0){
            quociente=divisor/dividendo;//descobre o quociente e o resto
            resto=divisor%dividendo;

            expoente=qtd_div;
            for(int j=1;j<=expoente;j++){
                potencia*=10;
                printf("10 a %d = %d",expoente,potencia);
            }

            acc+=resto*(potencia);//reconstruir o num com as alterações

            i--;//atualiza para o prox loop
        }

        printf("%d",acc);
        break;

    case 2:
        //bloco do 2
        break;

    case 3:
        //bloco do 3
        break;
    }
    return 0;
}
