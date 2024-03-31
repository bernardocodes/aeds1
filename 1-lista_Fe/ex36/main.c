/*
Exercício 36
Uma determinada loja de salgados vende a unidade de coxinha por 2.00 reais. Porém, esse preço
cai para 1.50 em encomendas com mais de 20 unidades. Crie um programa em C que receba a
quantidade de coxinhas em uma encomenda e imprima o preço total da compra.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd;//mem
    float total;

    printf("dig qtd: \n");//entrada
    scanf("%d",&qtd);

    if(qtd>20){
        total=20*1.50;//caso qtd>20
    }else{
        total=20*2.00;//caso qtd<=20
    }
    printf("total compra = %.2f",total);//saída
    return 0;
}
