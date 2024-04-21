#include <stdio.h>
#include <stdlib.h>

int main()//so mudou o asterisco com o - de lugar na hora de imprimir
{
    int lado;
    int cont=0;//pq conta a partir de 0

    scanf("%d%*c",&lado);

    for(int i=0;i<lado;i++){//percorrer linhas
        for(int j=0;j<lado;j++){//percorrer colunas

            if(cont%2==0){//tabuleiro começa no branco
                printf("*");
                cont++;//variar a cor no prox loop de j
            }else{//preto
                printf("-");
                cont++;//variar a cor no prox loop de j
            }
        }
        printf("\n");//passar prox linha
        if(lado%2==0){//atrasar var em - 1 para que o tabuleiro fique quadriculado, e não cheio de linhas
            cont-=1;
        }
        //se for impar n precisa atrasar
    }

    return 0;
}
