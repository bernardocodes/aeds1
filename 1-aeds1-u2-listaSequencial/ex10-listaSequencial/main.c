/*10. Faça um algoritmo que encontre as raízes de uma equação do segundo grau 𝑎𝑥2+𝑏𝑥+𝑐.
O algoritmo deve ler os coeficientes 𝑎, 𝑏 e 𝑐 e determinar as raízes da equação.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;//memória
    int delta;
    float x1,x2;

    puts("\ndigite coeficiente a: ");//entrada coeficientes
    scanf("%d",&a);
    puts("\ndigite coeficiente b: ");
    scanf("%d",&b);
    puts("\ndigite coeficiente c: ");
    scanf("%d",&c);

    /*delta = pow(b,2);//ERRO LÓGICA cálculo do delta
    delta = delta - 4 *(a * c);*/

    delta = pow(b, 2) - 4 * a * c; // cálculo do delta

    x1 = -b;
    x1 = x1 + sqrt(delta);
    x1 = x1/(2*a);

    x2 = -b;
    x2 = x2 - sqrt(delta);
    x2 = x2/(2*a);

    printf("\n\nx1 = %.2f",x1);
    printf("\n\nx1 = %.2f",x2);

    return 0;
}
