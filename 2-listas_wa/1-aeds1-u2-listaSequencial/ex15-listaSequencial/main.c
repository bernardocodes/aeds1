/*15. Fa�a um algoritmo que leia as seguintes informa��es de um empregado:
o n�mero de horas trabalhadas,
o valor do sal�rio m�nimo
e o n�mero de horas extras trabalhadas.

Calcule e mostre o sal�rio que o empregado receber� seguindo as seguintes regras:
� o valor pago por hora trabalhada � 1/8 do sal�rio m�nimo;
� o valor pago por hora extra vale 1/4 do sal�rio m�nimo;
� o sal�rio bruto equivale ao n�mero de horas trabalhadas vezes o valor pago por hora trabalhada;
� a quantia a receber por horas extras equivale ao n�mero de horas extras realizadas multiplicado pelo valor pago por hora extra;
� o sal�rio a receber � a soma do sal�rio bruto e da quantia a receber pelas horas extras.*/

#include <stdio.h>

int main()
{
    float h_trabalhadas;//mem�ria
    float s_min;
    float h_extras;
    float s_bruto;
    float salario;

    puts("\ndig horas trabalhadas: ");//entrada
    scanf("%f",&h_trabalhadas);
    puts("\ndig salario min: ");
    scanf("%f",&s_min);
    puts("\ndig horas extras: ");
    scanf("%f",&h_extras);


    float valor_hora = s_min/8;//pros
    float valor_h_extra = s_min/4;
    float salario_he;

    s_bruto = h_trabalhadas * valor_hora;
    salario_he = h_extras * valor_h_extra;

    salario = s_bruto + salario_he;

    printf("\n\nsalario = %.2f",salario);//sa�da

    return 0;
}
