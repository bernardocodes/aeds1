/*
Exerc�cio 48
Elabore um c�digo em C que receba um n�mero inteiro qualquer e imprima todos os n�meros
�mpares de 1 at� esse n�mero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("dig n: \n");//entrada
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        if(i%2!=0){
            printf("%d\n",i);//sa�da
        }
    }

    return 0;
}
