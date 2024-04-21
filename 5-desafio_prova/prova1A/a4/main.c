#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado;

    scanf("%d%*c",&lado);

    for(int i=0;i<lado;i++){
        for(int j=0;j<lado;j++){
            if(j%2==0){//tabuleiro começa com espaço em branco (i==0), para todo i par, linha começa com espaço em branco
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");//passar prox linha
    }
    return 0;
}
