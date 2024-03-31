/*
Exercício 35
Desenvolva um programa em C que receba um número e retorne “true”caso ele atenda o seguinte
critério: a) seja par; seja ímpar; c) seja negativo; d) seja múltiplo de 7; d) seja divisor de 100.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//mem

    printf("dig n: \n");//entrada
    scanf("%d",&n);

    printf("n e par?");//a e b

    if(n%2==0){//verifica se e par
        printf("true!\n");
        printf("n e impar?");
        printf("false!\n");
    }else{//se não e par, então é impar (des de q n seja inteiro)
        printf("false!\n");
        printf("n e impar?");
        printf("true!\n");
    }

    printf("n e negativo?");//c

    if(n<0){//testa se e negativo
        printf("true!\n");
    }else{
        printf("false!\n");
    }

    printf("n e multiplo de 7?");//d

    if(n%7==0){//testa se e multiplo de 7
        printf("true!\n");
    }else{
        printf("false!\n");
    }

    printf("n e divisor de 100?");//e

    if(100%n==0){//testa se e divisor de 100
        printf("true!\n");
    }else{
        printf("false!\n");
    }

    return 0;
}
