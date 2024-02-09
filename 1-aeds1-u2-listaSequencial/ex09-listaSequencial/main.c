/*9. Faça um algoritmo que calcule a área de uma circunferência, recebendo o valor do raio.*/

#include <stdio.h>

int main()
{
    float r,a;//memória
    float pi = 3.14;

    puts("\ndigite r: ");//entrada
    scanf("%f",&r);

    a = r*r;//pros
    a = a*pi;

    printf("\n\narea da circunferencia de raio %f = %f",r,a);//saída

    return 0;
}
