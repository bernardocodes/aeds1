/*12. Um funcion�rio receber� um aumento de sal�rio.
Fa�a um algoritmo que receba o sal�rio e o percentual de aumento, calcule e mostre o valor do aumento e o novo sal�rio.*/

#include <stdio.h>

int main()
{
    float salario, perc_aumento, val_aumento, n_salario;//mem�ria

    puts("\ndigite salario atual: ");//entrada
    scanf("%f",&salario);
    puts("\ndigite percentual de aumento: ");
    scanf("%f",&perc_aumento);

    val_aumento = salario/100 * perc_aumento;//pros
    n_salario = val_aumento + salario;

    printf("\n\no valor do aumento = %.2f",val_aumento);//sa�da
    printf("\n\no valor do novo salario = %.2f",n_salario);//sa�da

    return 0;
}
