/*
Exerc�cio 4

Escreva um programa em Portugol e em C que receba atrav�s da entrada do usu�rio, dois n�meros
a serem comparados. O programa deve imprimir o maior dos dois, mas caso sejam iguais, deve
imprimir "os n�meros s�o iguais".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;//mem
    scanf("%d%*c",&n1);//entrada
    scanf("%d%*c",&n2);
    if(n1==n2){
        printf("os numeros sao iguais!\n");//s
    }else if(n1>n2){
        printf("%d",n1);//s
    }else{
        printf("%d",n2);//s
    }
    return 0;
}
