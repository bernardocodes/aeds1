/*4. Crie um algoritmo que calcule a m�dia ponderada de 4 n�meros passados pelo usu�rio, sabendo-se que os pesos s�o, respectivamente, 1, 2, 3 e 4.*/

#include <stdio.h>

int main()
{
    int num1,num2,num3,num4;//mem�ria
    float mp;//m�dia ponderada

    puts("\ndigite num1: ");//entrada
    scanf("%d",&num1);
    puts("\ndigite num2: ");
    scanf("%d",&num2);
    puts("\ndigite num3: ");
    scanf("%d",&num3);
    puts("\ndigite num4: ");
    scanf("%d",&num4);

    mp = (num1 * 1) + (num2 * 2) + (num3 * 3) + (num4 * 4);//pros
    mp = mp/(1 + 2 + 3 + 4);

    printf("\n\na media ponderada = %f",mp);//sa�da

    return 0;
}
