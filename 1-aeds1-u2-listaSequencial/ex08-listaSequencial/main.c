/*8. Faça um algoritmo para calcular a área de um trapézio.
O algoritmo deve ler o valor da base menor, da base maior e da altura.
Em seguida, imprima o valor da área do trapézio.*/

#include <stdio.h>

int main()
{
    double a,B,b,h;//memória

    puts("\ndigite h: ");//entrada
    scanf("%lf",&h);
    puts("\ndigite B: ");
    scanf("%lf",&B);
    puts("\ndigite b: ");
    scanf("%lf",&b);

    a = (B + b);//pros
    a = a * h;
    a = a/2;

    printf("\n\nArea do trapezio = %lf",a);


    return 0;
}
