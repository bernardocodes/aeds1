/*
Exercício 27:

Faça um programa em C que leia o dia, mês e ano inserido por um usuário e imprima esses dados
no formato convencional brasileiro de data “dia/mês/ano”.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;//memória

    //entrada
    printf("dig dia: ");
    scanf("%d%*c",&dia);
    printf("dig mes: ");
    scanf("%d%*c",&mes);
    printf("dig ano: ");
    scanf("%d%*c",&ano);

    printf("%d/%d/%d",dia,mes,ano);

    return 0;
}
