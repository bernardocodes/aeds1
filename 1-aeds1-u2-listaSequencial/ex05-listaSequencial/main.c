/*5. Fa�a um algoritmo que receba um n�mero positivo, calcule e mostre:
� o n�mero ao cubo;
� a raiz quadrada do n�mero;
� a raiz c�bica do n�mero;
� o seno do n�mero;
� o cosseno do n�mero.*/

#include <stdio.h>
#include <math.h>

int main()
{
    double n,p3,raiz2,raiz3,seno,cosseno;//mem�ria

    puts("\ndigite n: ");//entrada
    scanf("%lf",&n);

    p3 = pow(n,3);//pros
    raiz2 = sqrt(n);
    raiz3 = cbrt(n);
    seno = sin(n);
    cosseno = cos(n);

    printf("\n\n%lf ao cubo: %lf",n,p3);//sa�da
    printf("\nraiz quadrada de %lf: %lf",n,raiz2);
    printf("\nraiz cubica de %lf: %lf",n,raiz3);
    printf("\nseno de %lf: %lf",n,seno);
    printf("\ncosseno de %lf: %lf",n,cosseno);

    return 0;
}
