/*Exerc�cio 22
Um determinado restaurante oferece a seus clientes x op��es de pratos principais, y op��es de
acompanhamentos e z op��es de bebidas. Crie um programa em C que receba os valores de x, y
e z e, ent�o, calcule o n�mero total de poss�veis refei��es desse restaurante.*/

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

    printf("total de pos. refeicoes: %d",t);//sa�da

    return 0;
}
