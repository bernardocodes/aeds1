/*14. Faça um programa que receba o preço de um produto, calcule e mostre o novo preço em duas condições distintas:
(a) o preço do produto sofreu um desconto de 10%.
(b) o preço do produto sofreu um aumento de 20%.*/

#include <stdio.h>

int main()
{

    float preco,desc,aum;//memória

    puts("\ndig preco: ");//entrada
    scanf("%f",&preco);

    desc = preco/100 * 10;//pros
    desc = preco + desc;//ERRO --> esqueceu dessa linha no caderno!
    aum = preco/100 * 20;
    aum = preco + aum;

    printf("\n\no preco com DESC = %.2f",desc);
    printf("\n\no preco com AUMENTO= %.2f",aum);

    return 0;
}
