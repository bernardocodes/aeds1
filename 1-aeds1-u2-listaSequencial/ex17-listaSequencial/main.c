/*17. Fa�a um algoritmo que receba uma quantidade qualquer em minutos e converta em horas.*/

#include <stdio.h>

int main()
{
    float h, min;//mem�ria

    puts("\ndigite valor em min: ");//entrada
    scanf("%f",&min);

    h = min/60;//pros

    printf("\n%.2f minuto(s) = %.2f hora(s)",min,h);//sa�da

    return 0;
}
