/*
Exerc�cio 52
Beatriz possui 37 anos e � m�e de Clarisse de apenas 7 anos. Desenvolva um programa em C que
calcule quantos anos ter� de Clarisse quando sua m�e tiver o dobro de sua idade.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b=37,c=7;//mem

    do{
        b++;
        c++;
    }while(c+c!=b);//repete enquanto b n�o for o dobro de c

    printf("clarice tera: %d",c);//sa�da
    return 0;
}
