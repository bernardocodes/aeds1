/*14. Fa�a um programa que receba o pre�o de um produto, calcule e mostre o novo pre�o em duas condi��es distintas:
(a) o pre�o do produto sofreu um desconto de 10%.
(b) o pre�o do produto sofreu um aumento de 20%.*/

#include <stdio.h>

int main()
{

    float preco,desc,aum;//mem�ria

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
