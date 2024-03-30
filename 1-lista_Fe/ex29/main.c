/*Exercício 29
Desenvolver um algoritmo ou programa em C que leia um número inteiro e verifique se o número
é divisível por 5 e por 3 ao mesmo tempo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char div='f';

    printf("O programa a seguir diz se n e divisivel por 5 e por 3 ao mesmo tempo!\n");

    printf("dig n: \n");//entrada
    scanf("%d",&n);

    if(n%5==0){
        if(n%3==0){
            div+=16;
            printf("%c",div);
        }//fim if
    }else{
        printf("%c",div);
    }//fim else

    return 0;
}
