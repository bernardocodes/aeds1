/*Exercício 21
Desenvolva um programa em C que receba um número através da entrada do usuário e imprima o
dobro da raiz do resto da divisão desse número por 5.*/

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

    printf("s=%f",s);//saída

    return 0;
}
