/*Exercício 13

Apresentar os passos necessários para encontrar as raízes de uma equação do segundo grau, caso
exita em R.
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,x1,x2,d;//mem

    printf("dig a: \n");//entrada coeficientes a,b,c
    scanf("%f%*c",&a);
    printf("dig b: \n");
    scanf("%f%*c",&b);
    printf("dig c: \n");
    scanf("%f%*c",&c);

    d = pow(b,2)-4*a*c;//cal delta
    printf("delta = %f\n",d);

    if(d>=0){//verifica se existe
        x1=(-b+sqrt(d))/(2*a);//cal x1 e x2
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%f x2=%f",x1,x2);//resp
    }else{
        printf("nao existem raizes reais!");
    }

    return 0;
}
