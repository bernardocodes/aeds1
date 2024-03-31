/*
Exercício 48
Elabore um código em C que receba um número inteiro qualquer e imprima todos os números
ímpares de 1 até esse número.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("dig n: \n");//entrada
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        if(i%2!=0){
            printf("%d\n",i);//saída
        }
    }

    return 0;
}
