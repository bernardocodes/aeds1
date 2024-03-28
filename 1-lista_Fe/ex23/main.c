/*
Exercício 23
Um aluno de física do ensino médio estava aprendendo sobre o cálculo de pressão de gases, quando
teve a ideia de facilitar sua vida através da programação. Para ajudá-lo, crie um programa em C
que receba os seguintes dados sobre um determinado gás: volume, número de mols e temperatura
(em kelvin). E, então, imprima o valor da pressão desse gás.
(Nota: Considere que o cálculo de pressão P possa ser obtido pela correlação PV = NRT, sendo
V, N e T, o volume, o número de mols, e a temperatura respectivamente; e a constante R = 0.082.)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float R = 0.082;
    float v,n,t,p;//mem

    printf("dig volume: \n");//entrada
    scanf("%f%*c",&v);
    printf("dig num mols: \n");
    scanf("%f%*c",&n);
    printf("dig temperatura: \n");
    scanf("%f%*c",&t);

    p=(n*R*t)/v;//pros

    printf("p=%.2f",p);//saída
    return 0;
}
