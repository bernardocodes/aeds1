/*
Exercício 25

O dono de uma pequena loja de roupas permite que o cliente pague por seu produto em parcelas
mensais a uma determinada taxa de juros compostos. Com o intuito de apresentar imediatamente
ao cliente seu gasto total, o dono busca uma ferramenta que automatize o cálculo desse gasto. Para
ajudá-lo, crie um programa em C que receba os seguintes dados sobre uma determinada compra:
capital inicial, taxa de juros e tempo de pagamento (em meses). E, então, imprima o valor do
montante dessa compra.
(Nota: Considere a fórmula juros compostos M = C(1 + i)^t,
sendo M, C, i e t, o montante, o capital

inicial, a taxa de juros e o período de tempo respectivamente.)
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m = 0, c = 0, i = 0, t = 0;//memória

    printf("dig capital inicial: ");//entrada
    scanf("%f",&c);
    printf("dig taxa de juros: ");
    scanf("%f",&i);
    printf("dig tempo de pagamento (em meses): ");
    scanf("%f",&t);

    m = c*pow((1+i),t);//pros

    printf("o montante = %.2f",m);//saída

    return 0;
}
