/*9.
Faça um programa que receba a idade do nadador e mostre sua categoria usando as regras a seguir.
Faça os testes necessários em relação à idade inválida, considerando que estão aptos apenas pessoas com 5 ou mais anos.

categoria:	idade:
infantil	até 7
juvenil		8 a 10
adolescente	11 a 15
adulto		16 a 30
sênior		acima de 30

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;//mem

    //entrada
    printf("\ndig idade: ");
    scanf("%d",&i);

    //pros e saída
    if(i<=7&&i>=5){
        printf("\ncategoria infantil!");//s
    }else if(i>=8&&i<=10){
        printf("\ncategoria juvenil!");//s
    }else if(i>=11&&i<=15){
        printf("\ncategoria adolescente!");//s
    }else if(i>=16&&i<=30){
        printf("\ncategoria adulto!");//s
    }else if(i>30){
        printf("\ncategoria senior!");//s
    }else if(i<5){
        printf("\ncategoria invalida!");//s
    }//fim else if

    return 0;
}
