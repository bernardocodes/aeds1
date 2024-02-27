/*13. Faça um algoritmo que encontre as raízes de uma equação do segundo grau 

ax^2 + bx + c. 

O algoritmo deve ler
os coeficientes a, b e c e determinar as raízes da equação. Caso as raízes não sejam reais, imprimir uma
mensagem informando.*/

/*código como estava:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //mem
    float r1,r2;//raízes reais
    float delta;
    float a,b,c;//coeficientes

    //entrada
    printf("dig a:\n");
    scanf("%f",&a);
    printf("dig b:\n");
    scanf("%f",&b);
    printf("dig c:\n");
    scanf("%f",&c);

    //pros
    delta = pow(b,2)-4*a*c;//cálculo do delta

    if(delta<0){//delta pertence a R?
        printf("\nraizes nao existem em reias!");
        exit(0);
    }else if(delta>=0){
    r1 = (-b + sqrt(delta))/2*a;
    r2 = (-b - sqrt(delta))/2*a;
    }//fim else if

    //saída:
    printf("\nr1 = %f",r1);
    printf("\nr2 = %f",r2);

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //mem
    float r1,r2;//raízes reais
    float delta;
    float a,b,c;//coeficientes

    //entrada
    printf("dig a:\n");
    scanf("%f",&a);
    printf("dig b:\n");
    scanf("%f",&b);
    printf("dig c:\n");
    scanf("%f",&c);


    //pros
    delta = pow(b,2)-4*a*c;//cálculo do delta

    //testando
    printf("\ndelta = %f",delta);


    if(delta<0){//delta pertence a R?
        printf("\nraizes nao existem em reias!");
        exit(0);
    }else if(delta>=0){//O ERRO ESTAVA AQUI - NA PROCEDÊNCIA DE OPERAÇÕES (SEGUE DUAS FORMAS DIFERENTES DE REPRESENTAR:)

    r1 = sqrt(delta);//PRIMEIRA FORMA,
    r1 = (-b + r1);
    r1 = r1/(2*a);

    r2 = (-b - sqrt(delta))/(2*a);//SEGUNDA FORMA,

    }//fim else if

    //saída:
    printf("\nr1 = %.3f",r1);
    printf("\nr2 = %.3f",r2);


    return 0;
}
