/*17. Faça um algoritmo que receba uma quantidade qualquer em minutos e converta em horas.*/

#include <stdio.h>

int main()
{
    float h, min;//memória

    puts("\ndigite valor em min: ");//entrada
    scanf("%f",&min);

    h = min/60;//pros

    printf("\n%.2f minuto(s) = %.2f hora(s)",min,h);//saída

    return 0;
}
