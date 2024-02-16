/*18. Sejam P(x1,y1) e Q(x2,y2) dois pontos quaisquer no plano.
A distância entre os pontos é dada por

   ___________________
d=√(x2−x1)^2+(y2−y1)^2.

Faça um algoritmo que leia as coordenadas dos dois pontos, determine e escreva a distância entre eles.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2;//coordenadas
    float d;//distância
    float t1,t2;//auxiliares

    puts("\ndigite a coordenada x do ponto 1: ");//entrada
    scanf("%f",&x1);
    puts("\ndigite a coordenada y do ponto 1: ");
    scanf("%f",&y1);
    puts("\ndigite a coordenada x do ponto 2: ");
    scanf("%f",&x2);
    puts("\ndigite a coordenada y do ponto 2: ");
    scanf("%f",&y2);

    t1 = x2-x1;
    t1 = pow(t1,2);
    //printf("%f",t1);

    t2 = pow(y2-y1,2);
    //printf("%f",t2);

    d = sqrt(t1+t2);

    printf("\n\nd = %f",d);//saída

    return 0;
}
