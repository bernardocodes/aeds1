/*
Exercício 52
Beatriz possui 37 anos e é mãe de Clarisse de apenas 7 anos. Desenvolva um programa em C que
calcule quantos anos terá de Clarisse quando sua mãe tiver o dobro de sua idade.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b=37,c=7;//mem

    do{
        b++;
        c++;
    }while(c+c!=b);//repete enquanto b não for o dobro de c

    printf("clarice tera: %d",c);//saída
    return 0;
}
