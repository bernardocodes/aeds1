/*13. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas.
Faça um algoritmo que receba o salário fixo do funcionário e o valor de suas vendas no mês, calcule e mostre a comissão e seu salário final.*/

#include <stdio.h>

int main()
{
    float fixo, total_vendas, comissao, salario;//memória

    puts("\ndigite o valor do salario fixo: ");//entrada
    scanf("%f",&fixo);
    puts("\ndigite total de vendas desse mes em reias: ");
    scanf("%f",&total_vendas);

    comissao = total_vendas/100 * 4;//pros
    salario = fixo + comissao;

    printf("\n\no funcionario vai receber: %.2f de comissao, totalizando %.2f de salario total esse mes!",comissao,salario);//saída

    return 0;
}
