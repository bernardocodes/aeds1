/*11. Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio considerando um aumento de 25%.*/

#include <stdio.h>

int main()
{
    float salario, novo, perc;//mem�ria

    puts("\ndigite valor do salario: ");//entrada
    scanf("%f",&salario);

    perc = (salario/100)*25;//pros
    novo = salario + perc;

    printf("\n\nnovo salario = %.2f",novo);//sa�da

    return 0;
}
