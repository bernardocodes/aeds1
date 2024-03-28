/*
Exerc�cio 23
Um aluno de f�sica do ensino m�dio estava aprendendo sobre o c�lculo de press�o de gases, quando
teve a ideia de facilitar sua vida atrav�s da programa��o. Para ajud�-lo, crie um programa em C
que receba os seguintes dados sobre um determinado g�s: volume, n�mero de mols e temperatura
(em kelvin). E, ent�o, imprima o valor da press�o desse g�s.
(Nota: Considere que o c�lculo de press�o P possa ser obtido pela correla��o PV = NRT, sendo
V, N e T, o volume, o n�mero de mols, e a temperatura respectivamente; e a constante R = 0.082.)
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

    printf("p=%.2f",p);//sa�da
    return 0;
}
