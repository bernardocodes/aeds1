/*12.
Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rio inferior a R$700,00
e 10% aos funcion�rios com sal�rio superior ou igual � R$700,00.

Fa�a um algoritmo que leia o sal�rio do funcion�rio, calcule o reajuste e mostre o novo sal�rio.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //mem�ria
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

    //sa�da
    printf("\nnovo salario = %.2f",reajuste);

    return 0;
}
