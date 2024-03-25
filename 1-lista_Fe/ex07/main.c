/*
Exercício 7

Crie um programa em Portugol e em C que receba, através da entrada do usuário, um número
inteiro e um número decimal e, então, faça a soma dos dois, de modo a imprimir um resultado
como inteiro.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma,n1;//mem
    float n2;
    scanf("%d%*c",&n1);//entrada
    scanf("%f%*c",&n2);
    soma=n1+n2;
    //printf("soma = %d",n1+n2);//pro/saída --> desse jeito estava dando errado
    printf("soma: %d",soma);
    return 0;
}
