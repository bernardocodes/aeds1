/*9. Fa�a um algoritmo que calcule a �rea de uma circunfer�ncia, recebendo o valor do raio.*/

#include <stdio.h>

int main()
{
    float r,a;//mem�ria
    float pi = 3.14;

    puts("\ndigite r: ");//entrada
    scanf("%f",&r);

    a = r*r;//pros
    a = a*pi;

    printf("\n\narea da circunferencia de raio %f = %f",r,a);//sa�da

    return 0;
}
