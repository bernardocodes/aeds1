/*5. Faça um algoritmo que receba um número positivo, calcule e mostre:
• o número ao cubo;
• a raiz quadrada do número;
• a raiz cúbica do número;
• o seno do número;
• o cosseno do número.*/

#include <stdio.h>
#include <math.h>

int main()
{
    double n,p3,raiz2,raiz3,seno,cosseno;//memória

    puts("\ndigite n: ");//entrada
    scanf("%lf",&n);

    p3 = pow(n,3);//pros
    raiz2 = sqrt(n);
    raiz3 = cbrt(n);
    seno = sin(n);
    cosseno = cos(n);

    printf("\n\n%lf ao cubo: %lf",n,p3);//saída
    printf("\nraiz quadrada de %lf: %lf",n,raiz2);
    printf("\nraiz cubica de %lf: %lf",n,raiz3);
    printf("\nseno de %lf: %lf",n,seno);
    printf("\ncosseno de %lf: %lf",n,cosseno);

    return 0;
}
