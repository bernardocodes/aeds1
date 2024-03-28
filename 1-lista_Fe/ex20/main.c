/*
Exercício 20
Crie um programa em C que receba os dados necessários, calcule e imprima a área das seguintes
formas geométricas:
a) quadrado;
b) triângulo;
c) círculo;
d) trapézio.
(Nota: Considere a fórmula área do trapézio: (B + b) ∗ h/2 sendo B, b e h, a base maior, a base
menor e a altura respectivamente.)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415 //ou: float PI = 3.1415;

int main()
{
    float l,b,h,r,B,a;//memória- lado, base, altura, raio, base maior, area

    char letra;//escolha do cálculo
    printf("dig letra: \n");
    scanf("%c%*c",&letra);

    switch(letra){
        case 'a':

            printf("dig lado do quadrado: \n");//entrada
            scanf("%f%*c",&l);
            a=l*l;//pros
            printf("a=%f",a);//saída

            break;

        case 'b':

            printf("dig base triang: \n");//entrada
            scanf("%f%*c",&b);
            printf("dig h tring: \n");
            scanf("%f%*c",&h);
            a=(b*h)/2;//pros
            printf("a=%f",a);//saída

            break;

        case 'c':

            printf("dig raio circ: \n");//entrada
            scanf("%f%*f",&r);
            a=PI*pow(r,2);//pros
            printf("a=%f",a);//saída

            break;

        case 'd':

            scanf("%f%*c",&b);//entrada
            scanf("%f%*c",&B);
            scanf("%f%*c",&h);
            a=((b+B)*h)/2;//pros
            printf("a=%f",a);//saída

            break;

        default:
            printf("letra invalida!\n");

    }//fim switch

    return 0;
}//fim main
