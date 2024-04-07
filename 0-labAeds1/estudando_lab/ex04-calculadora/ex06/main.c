/*
ex06-calculadora estranha:

remoção no y-ésimo digito de x (x=1234,y=2, então saída=134)
*/

#include <stdio.h>
#include <math.h>

int main() {

    int x,y;
    int cont=0;//num div
    int quociente;
    int resto;
    int resp=0;// =0 para n imprimir lixo
    int indice=0;//expoente do num decomposto (ex: algarismo + 10^indice(0=unidade,1=dezena,2=centena...)

    printf("dig num inteiro: \n");
    scanf("%d",&x);
    printf("dig posicao do algarismo que deve ser removido (da esquerda para a direita, sendo o primeiro algarismo = posicao 1: \n");
    scanf("%d",&y);

    quociente=x;//dividir sem perder val inicial

    while(quociente!=0){//descobrir número divisões x/10
        quociente/=10;
        cont++;
    }

    quociente=x;//setar o valor para dividir novamente

    for(int i=cont;i>0;i--){//construir o novo num

        resto=quociente%10;
        quociente/=10;

        if(i!=y){//retirar num pos y
            resp+=resto*pow(10,indice);//montar o num que foi decomposto
            indice++;
        }
    }

    printf("%d",resp);

    return 0;
}


