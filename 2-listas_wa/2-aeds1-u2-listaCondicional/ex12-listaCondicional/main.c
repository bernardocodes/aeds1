/*12.
Uma empresa decide dar um aumento de 30% aos funcionários com salário inferior a R$700,00
e 10% aos funcionários com salário superior ou igual à R$700,00.

Faça um algoritmo que leia o salário do funcionário, calcule o reajuste e mostre o novo salário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //memória
    float salario, aumento, reajuste;

    //entrada
    printf("\ndig salario: ");
    scanf("%f",&salario);

    //pros
    if(salario<700){
        aumento = (salario/100)*30;
        reajuste = aumento + salario;
    }else if(salario>=700){
        aumento = (salario/100)*10;
        reajuste = aumento + salario;
    }//fim else if

    //saída
    printf("\nnovo salario = %.2f",reajuste);

    return 0;
}
