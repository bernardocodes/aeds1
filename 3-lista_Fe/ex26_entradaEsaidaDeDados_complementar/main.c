/*
Exercício 26:

Os tipos de variável f loat e double são utilizadas para armazenar números decimais e possuem
capacidade de alocação de 4 e 8 bytes, respectivamente. Crie um programa em C que receba,
através da entrada do usuário, um valor para uma variável f e outro para a variável d. O primeiro
valor deve ser um decimal com até 7 casas decimais, e o outro, a partir de 7 casas. Logo após, o
programa deve somar os dois valores e imprimir o resultado com 8 casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f = 0;//memória
    double d = 0, soma = 0;

    //entrada
    printf("dig num (com ate 6 casas decimais): \n");
    scanf("%f%*c",&f);
    printf("dig num (a partir de 7 casas decimais): \n");
    scanf("%lf%*c",&d);

    //pros
    soma = f + d;

    //saída
    printf("%f + %lf = %lf",f,d,soma);

    return 0;
}
