/*16. Fa�a um algoritmo que receba uma quantidade qualquer em horas e converta em minutos.*/

#include <stdio.h>

int main()
{
    float hora, min;//mem�ria

    puts("\ndigite valor em hora: ");//pros
    scanf("%f",&hora);

    min = hora * 60;//pros

    printf("\n\no valor digitado em h corresponde a %.1f min",min);//sa�da

    return 0;
}
