/*8. Fa�a um algoritmo para calcular a �rea de um trap�zio.
O algoritmo deve ler o valor da base menor, da base maior e da altura.
Em seguida, imprima o valor da �rea do trap�zio.*/

#include <stdio.h>

int main()
{
    double a,B,b,h;//mem�ria

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
