/*11. Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário considerando um aumento de 25%.*/

#include <stdio.h>

int main()
{
    float salario, novo, perc;//memória

    puts("\ndigite valor do salario: ");//entrada
    scanf("%f",&salario);

    perc = (salario/100)*25;//pros
    novo = salario + perc;

    printf("\n\nnovo salario = %.2f",novo);//saída

    return 0;
}
