/*13. Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas.
Fa�a um algoritmo que receba o sal�rio fixo do funcion�rio e o valor de suas vendas no m�s, calcule e mostre a comiss�o e seu sal�rio final.*/

#include <stdio.h>

int main()
{
    float fixo, total_vendas, comissao, salario;//mem�ria

    puts("\ndigite o valor do salario fixo: ");//entrada
    scanf("%f",&fixo);
    puts("\ndigite total de vendas desse mes em reias: ");
    scanf("%f",&total_vendas);

    comissao = total_vendas/100 * 4;//pros
    salario = fixo + comissao;

    printf("\n\no funcionario vai receber: %.2f de comissao, totalizando %.2f de salario total esse mes!",comissao,salario);//sa�da

    return 0;
}
