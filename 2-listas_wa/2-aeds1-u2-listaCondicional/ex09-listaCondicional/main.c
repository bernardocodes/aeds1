/*9.
Fa�a um programa que receba a idade do nadador e mostre sua categoria usando as regras a seguir.
Fa�a os testes necess�rios em rela��o � idade inv�lida, considerando que est�o aptos apenas pessoas com 5 ou mais anos.

categoria:	idade:
infantil	at� 7
juvenil		8 a 10
adolescente	11 a 15
adulto		16 a 30
s�nior		acima de 30

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;//mem

    //entrada
    printf("\ndig idade: ");
    scanf("%d",&i);

    //pros e sa�da
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
