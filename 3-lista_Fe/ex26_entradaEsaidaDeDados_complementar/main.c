/*
Exerc�cio 26:

Os tipos de vari�vel f loat e double s�o utilizadas para armazenar n�meros decimais e possuem
capacidade de aloca��o de 4 e 8 bytes, respectivamente. Crie um programa em C que receba,
atrav�s da entrada do usu�rio, um valor para uma vari�vel f e outro para a vari�vel d. O primeiro
valor deve ser um decimal com at� 7 casas decimais, e o outro, a partir de 7 casas. Logo ap�s, o
programa deve somar os dois valores e imprimir o resultado com 8 casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f = 0;//mem�ria
    double d = 0, soma = 0;

    //entrada
    printf("dig num (com ate 6 casas decimais): \n");
    scanf("%f%*c",&f);
    printf("dig num (a partir de 7 casas decimais): \n");
    scanf("%lf%*c",&d);

    //pros
    soma = f + d;

    //sa�da
    printf("%f + %lf = %lf",f,d,soma);

    return 0;
}
