/*12. Um funcionário receberá um aumento de salário.
Faça um algoritmo que receba o salário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.*/

#include <stdio.h>

int main()
{
    float salario, perc_aumento, val_aumento, n_salario;//memória

    puts("\ndigite salario atual: ");//entrada
    scanf("%f",&salario);
    puts("\ndigite percentual de aumento: ");
    scanf("%f",&perc_aumento);

    val_aumento = salario/100 * perc_aumento;//pros
    n_salario = val_aumento + salario;

    printf("\n\no valor do aumento = %.2f",val_aumento);//saída
    printf("\n\no valor do novo salario = %.2f",n_salario);//saída

    return 0;
}
