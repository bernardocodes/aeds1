#include <stdio.h>
#include <stdlib.h>

int main()
{
    //memória
    int p10=1;//para não interferir no cálculo da pot
    int resposta=0;
    int resto=0;
    int x=0,y=0;
    int quociente=0;
    int cont=0;//contador

    //entrada
    printf("dig x: \n");
    scanf("%d%*c",&x);
    printf("dig y: \n");
    scanf("%d%*c",&y);

    quociente=x;//repete q/=10 sem alterar val de x

    while(quociente!=0){//descobrir qtd de divisões inteiras para poder inverter o num e, em seguida printar na ordem correta
        quociente/=10;
        cont++;
    }

    quociente=x;//atualizar o val de x

    for(int i=0;i<cont;i++){

        resto=quociente%10;//encontrar algarismo
        quociente/=10;

        for(int p=0;p<i;p++){//calc pow 10 sem usar math.h
            p10*=10;
        }

        if(resto!=y){//montar o num retirando o algarismo y
            resposta+=(p10*10)+resto;
        }
    }

    printf("%d",resposta);

    return 0;
}
