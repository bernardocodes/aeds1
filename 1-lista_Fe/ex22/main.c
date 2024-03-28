/*Exercício 22
Um determinado restaurante oferece a seus clientes x opções de pratos principais, y opções de
acompanhamentos e z opções de bebidas. Crie um programa em C que receba os valores de x, y
e z e, então, calcule o número total de possíveis refeições desse restaurante.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,t;//mem

    printf("dig x: \n");//entrada
    scanf("%d%*c",&x);
    printf("dig y: \n");
    scanf("%d%*c",&y);
    printf("dig z: \n");
    scanf("%d%*c",&z);

    t=x*y*z;//pros

    printf("total de pos. refeicoes: %d",t);//saída

    return 0;
}
