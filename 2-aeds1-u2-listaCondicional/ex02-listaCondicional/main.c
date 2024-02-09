/*2.Faça um algoritmo que receba um número inteiro e verifique se é par ou ímpar.*/

#include <stdio.h>

int main()
{
    int n,par,impar;//mem

    puts("\ndig n: ");//entrada
    scanf("%d",&n);

    if(n%2==0){//saída
        puts("\nn e par!");
    }else{
        puts("\nn e impar!");
    }

    return 0;
}
