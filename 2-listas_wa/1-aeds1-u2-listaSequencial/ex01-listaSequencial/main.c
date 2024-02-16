/*1. Crie um algoritmo que calcule a soma e o produto de 3 números fornecidos pelo usuário.*/

#include <stdio.h>

int main()
{
    int soma, produto;//memória
    int num1, num2, num3;

    puts("digite num1: ");//entrada
    scanf("%d",&num1);

    puts("digite num2: ");
    scanf("%d",&num2);

    puts("digite num3: ");
    scanf("%d",&num3);

    soma = num1 + num2 + num3;//processamento
    produto = num1 * num2 * num3;

    printf("\nSoma: %d",soma);//saída
    printf("\nProduto: %d",produto);

    return 0;
}
