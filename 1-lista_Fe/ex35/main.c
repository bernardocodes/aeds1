/*
Exerc�cio 35
Desenvolva um programa em C que receba um n�mero e retorne �true�caso ele atenda o seguinte
crit�rio: a) seja par; seja �mpar; c) seja negativo; d) seja m�ltiplo de 7; d) seja divisor de 100.
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
    }else{//se n�o e par, ent�o � impar (des de q n seja inteiro)
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
