/*Exerc�cio 21
Desenvolva um programa em C que receba um n�mero atrav�s da entrada do usu�rio e imprima o
dobro da raiz do resto da divis�o desse n�mero por 5.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,resto;//mem
    float s;

    printf("dig n: \n");//entrada
    scanf("%d%*c",&n);

    resto=n%5;//pros
    s=sqrt(resto)*2;

    printf("s=%f",s);//sa�da

    return 0;
}
