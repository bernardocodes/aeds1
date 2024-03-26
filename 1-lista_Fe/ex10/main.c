/*Exercício 10

Para cada um dos problemas a seguir, expresse um algoritmo que possa ser utilizado para
solucioná-lo. Utilize o Portugol e passe para a linguagem C.
a) Leia três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

b) Receba uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).

c) Leia uma quantidade em horas e imprima seu valor em segundos.

(Nota: Em (b) use a fórmula de conversão: F = 9
5C + 32)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,mp;//mem a
    int p1,p2,p3;

    float c,f;//mem b

    float h,s;//mem c

    char letra;//switch
    printf("dig letra ex10: ");
    scanf("%c%*c",&letra);

    switch(letra){
    case 'a':

        printf("dig n1: ");//entrada notas
        scanf("%f%*c",&n1);
        printf("dig n2: ");
        scanf("%f%*c",&n2);
        printf("dig n3: ");
        scanf("%f%*c",&n3);

        printf("dig peso de n1: ");//entrada dos pesos
        scanf("%d%*c",&p1);
        printf("dig peso de n2: ");
        scanf("%d%*c",&p2);
        printf("dig peso de n3: ");
        scanf("%d%*c",&p3);

        mp=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);//cal mp

        printf("mp = %.2f",mp);//saída mp

        break;

    case 'b':

        printf("dig temp em Celsius: ");//entrada c
        scanf("%f%*c",&c);

        f=((9*c)/5)+32;//pros

        printf("%f Celsius vale %f Fahrenheit!",c,f);//saída

        break;

    case 'c':

        printf("dig tempo em horas: ");//entrada
        scanf("%f%*c",&h);

        s=h*3600;//pros

        printf("%f horas = %.2f segundos!",h,s);//saída

        break;

    default:
        printf("letra invalida!");
    }
    return 0;
}
