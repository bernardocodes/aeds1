/*
Exerc�cio 27:

Fa�a um programa em C que leia o dia, m�s e ano inserido por um usu�rio e imprima esses dados
no formato convencional brasileiro de data �dia/m�s/ano�.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;//mem�ria

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
